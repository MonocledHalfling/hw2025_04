#include <stdio.h>
#include <string.h>

const char *numKor[] = {"", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구"};
const char *unit[] = {"", "십", "백", "천"};
const char *bigUnit[] = {"", "만", "억", "조"};

void convert_to_korean_number(const char *number) {
    int len = strlen(number);
    int groupCount = (len + 3) / 4;
    int start = len % 4;
    if (start == 0) start = 4;

    int idx = 0;

    for (int g = 0; g < groupCount; g++) {
        int digits = g == 0 ? start : 4;
        int isZeroGroup = 1;

        for (int i = 0; i < digits; i++) {
            if (idx >= len) break;
            int num = number[idx++] - '0';

            if (num != 0) {
                isZeroGroup = 0;
                printf("%s%s", numKor[num], unit[digits - i - 1]);
            }
        }

        if (!isZeroGroup) {
            printf("%s", bigUnit[groupCount - g - 1]);
        }
    }

    printf("\n");
}

void p_10() {
    char input[100];
    printf("숫자를 입력하세요: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    convert_to_korean_number(input);
}