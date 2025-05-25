#include <stdio.h>

struct person {
    const char *name;
    int age;

    struct phone {
        const char *home_num;
        const char *mobile_num;
    } number;
};

void p_16() {
    struct person man;
    struct person *pt = &man;

    pt->name = "lsm";
    pt->age = 21;
    pt->number.home_num = "02-345-0084";
    pt->number.mobile_num = "010-123-4567";

    printf("name : %s\n", man.name);
    printf("age : %d\n", man.age);
    printf("home_num : %s\n", man.number.home_num);
    printf("mobile_num : %s", man.number.mobile_num);
}
