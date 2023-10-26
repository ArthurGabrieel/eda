#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void print_node(node *head, int i) {
    int count = 1;
    while(count <= i && head) {
        head = head->next;
        count++;
    }
    if(head) printf("%d\n", head->data);
    else printf("NULL\n");
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

    print_node(&n1, 3);
    return 0;
}