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

void insert(node *head, int data, int i) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    if (i == 0) {
        newNode->next = head->next;
        head->next = newNode;
        return;
    }

    int count = 1;
    while (count <= i && head) {
        head = head->next;
        count++;
    }

    newNode->next = head->next;
    head->next = newNode;
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

    insert(&n1, 13, 1);
    print(&n1);

    return 0;
}
