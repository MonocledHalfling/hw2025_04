#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *src);

void p_05(void) {
    char str1[10];
    char str2[10];

    printf("enter 1: ");
    fgets(str1, 10, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("enter 2: ");
    fgets(str2, 10, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("enter: %c, %c\n", *str1, *str2);
    printf("rs: %s\n", my_strcat(str1, str2));
}

char *my_strcat(char *dest, const char *src) {
    char *p = dest;

    while (*p) p++;
    while (*src) *p++ = *src++;

    return dest;
}