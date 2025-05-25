#include <stdio.h>

int my_strcmp11(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void my_strcpy11(char *dest, const char *src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

void p_11() {
    const char *s1 = "Welcome to C Programming !";
    const char *s2 = "Welcome to C World !";
    char copied[100];

    int cmp_result = my_strcmp11(s1, s2);
    printf("my_strcmp 결과: %d\n", cmp_result);

    my_strcpy11(copied, s1);
    printf("my_strcpy 결과: %s\n", copied);
}
