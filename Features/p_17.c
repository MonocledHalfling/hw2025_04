#include <stdio.h>

struct node {
    char data;
    struct node *link;
};

void p_17() {
    struct node *head, a1, a2, a3;
    a1.data = 'A';
    a2.data = 'K';
    a3.data = 'D';

    head = &a1;
    a1.link = &a2;
    a2.link = &a3;
    a3.link = NULL;

    printf("Linked List \n\n");
    printf("head : %p\n", &head);
    printf("head pointer : %p\n", &head);

    while (head != NULL) {
        printf("data: %c | adress: %p\n", head->data, &head->link);
        head = head->link;
    }
}
