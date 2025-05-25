#include <stdio.h>
#include <string.h>

void reverseName(char *name) {
    int len = strlen(name);
    for (int i = 0; i < len / 2; i++) {
        char temp = name[i];
        name[i] = name[len - 1 - i];
        name[len - 1 - i] = temp;
    }
}

void p_08() {
    char chr[100];

    printf("영문 이름을 입력하세요 (공백 포함): ");
    gets(chr);
    printf("입력한 이름: %s\n", chr);

    reverseName(chr);
    printf("역순 이름: %s\n", chr);
}