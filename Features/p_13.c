#include <stdio.h>
#include <string.h>

struct use {
    char name[20];
    char phone[14];
    char quick;
};

void p_13() {
    struct use d;
    strncpy(d.name, "이성민", sizeof(d.name) - 1);
    d.name[sizeof(d.name) - 1] = '\0';

    strncpy(d.phone, "010-123-4567", sizeof(d.phone) - 1);
    d.phone[sizeof(d.phone) - 1] = '\0';
    d.quick = 1;

    printf("name : %s\n", d.name);
    printf("phone : %s\n", d.phone);
    printf("quick : %d\n", d.quick);
}