#include <stdio.h>

void p_07() {
    printf("test");
    char str1[5] = "copy";
    char str2[5] = "test";

    str1[0] = 'C';
    str2[0] = 'T';
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    *str1 = *str2;
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
}
