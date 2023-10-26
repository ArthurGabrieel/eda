#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void print(node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

node* delete(node *head, int i) {
    if (i == 0 && head) {
        node *temp = head->next;
        return temp;
    }

    int count = 1;
    node *current = head;
    while (count < i && current && current->next) {
        current = current->next;
        count++;
    }

    if (current && current->next) {
        node *temp = current->next->next;
        current->next = temp;
    }

    return head;
}

int main() {
    node n1, n2, n3, n4, n5;

    n1.data = 1;
    n1.next = &n2;

    n2.data = 2;
    n2.next = &n3;

    n3.data = 3;
    n3.next = &n4;

    n4.data = 4;
    n4.next = &n5;

    n5.data = 5;
    n5.next = NULL;

    node *newHead = delete(&n1, 3);
    print(newHead);

    return 0;
}
