#include <stdio.h>
#include <string.h>

void p_06(void) {
    char s[10] = "program";
    const char *strl = "compile";
    printf("original string: %s\n", s);
    printf("length of original string: %lu\n", strlen(strl));
    strncpy(s, strl, 4);
    printf("\ns after strncpy : %s\n", s);
    printf("length of s after strncpy: %lu\n", strlen(s));
    s[4] = '\0';
    printf("s after null termination: %s\n", s);
    printf("length of s after null termination: %lu\n", strlen(s));
}
