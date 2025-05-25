#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data[10];
    struct node *link;
};

struct node *create(void);

void input_name(struct node *ptr);

void p_18() {
    struct node *head, *a1, *a2, *a3;

    a1 = create();
    a2 = create();
    a3 = create();

    input_name(a1);
    input_name(a2);
    input_name(a3);

    head = a1;
    a1->link = a2;
    a2->link = a3;
    a3->link = NULL;

    printf("\nLinked List \n\n");
    while (head != NULL) {
        printf("데이터: %s, 주소: %p\n", head->data, (void *) head->link);
        head = head->link;
    }
}

struct node *create(void) {
    return (struct node *) malloc(sizeof(struct node));
}

void flush_input() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void input_name(struct node *ptr) {
    printf("이름을 입력하고 Enter: ");
    if (fgets(ptr->data, sizeof(ptr->data), stdin) == NULL) {
        ptr->data[0] = '\0';
    } else {
        ptr->data[strcspn(ptr->data, "\n")] = '\0';
    }

    if (strlen(ptr->data) == sizeof(ptr->data) - 1 && ptr->data[sizeof(ptr->data) - 2] != '\n') {
        flush_input();
    }
}