#include <stdio.h>
#include "user.h"

void p_15() {
    struct user data[2] = {
        {"이성민", "010-123-4567", 1},
        {"이성민2", "011-234-5678", 8}
    };

    struct user *pt = data;
    for (int i = 0;i < 2;i++)
    {
        printf("name : %s\n", (pt + i)->name);
        printf("phone : %s\n", (pt + i)->phone);
        printf("quick : %d\n", (pt + i)->quick);
        printf("\n");
    }
}
