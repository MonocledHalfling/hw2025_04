#include <stdio.h>

struct person {
    char name[20];
    char phone[14];
    int quick;
};

void display_st(struct person data);

void p_14() {
    struct person data = { "이성민","010-123-4567",1 };
    display_st(data);
}

void display_st(struct person data) {
    printf("name : %s\n", data.name);
    printf("phone : %s\n", data.phone);
    printf("quick : %d\n", data.quick);
}
