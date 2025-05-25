#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print_number_hangle(char ch) {
    const char *kor[] = {"영", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구"};
    if (isdigit(ch)) {
        printf("%s", kor[ch - '0']);
    }
}

int is_hangle_digit(const char *str) {
    const char *kor[] = {"영", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구"};
    for (int i = 0; i < 10; i++) {
        if (strncmp(str, kor[i], strlen(kor[i])) == 0) {
            return i;
        }
    }
    return -1;
}

void p_09() {
    char input[100];
    printf("enter: ");
    fgets(input, sizeof(input), stdin);

    int i = 0;
    while (input[i] != '\0') {
        if (isdigit(input[i])) {
            print_number_hangle(input[i]);
            i++;
        } else if (input[i] == ' ') {
            printf(" ");
            i++;
        } else {
            int digit = is_hangle_digit(&input[i]);
            if (digit != -1)
                printf("%d", digit);
            i++;
        }
    }
}