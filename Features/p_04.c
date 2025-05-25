#include <stdio.h>
#include <stdlib.h>

void _itoa(int value, char *str, int base);
void _ltoa(long value, char *str, int base);

int p_04(void) {
    int num1 = 14;
    long num2 = 512;
    char s[25];

    _itoa(num1, s, 2);
    printf("정수:%d, 2진수문자열:%s\n", num1, s);

    _ltoa(num2, s, 16);
    printf("정수:%ld, 16진수문자열:%s\n", num2, s);

    return 0;
}

// int용 변환
void _itoa(int value, char *str, int base) {
    sprintf(str, (base == 10 ? "%d" : base == 16 ? "%x" : ""));
    if (base == 2) {
        int i = 0;
        if (value == 0) {
            str[i++] = '0';
        } else {
            while (value > 0) {
                str[i++] = (value % 2) + '0';
                value /= 2;
            }
            // reverse
            for (int j = 0; j < i / 2; j++) {
                char tmp = str[j];
                str[j] = str[i - j - 1];
                str[i - j - 1] = tmp;
            }
        }
        str[i] = '\0';
    } else if (base == 10 || base == 16) {
        sprintf(str, base == 10 ? "%d" : "%x", value);
    }
}

// long용 변환
void _ltoa(long value, char *str, int base) {
    sprintf(str, (base == 10 ? "%ld" : base == 16 ? "%lx" : ""));
    if (base == 2) {
        int i = 0;
        if (value == 0) {
            str[i++] = '0';
        } else {
            while (value > 0) {
                str[i++] = (value % 2) + '0';
                value /= 2;
            }
            // reverse
            for (int j = 0; j < i / 2; j++) {
                char tmp = str[j];
                str[j] = str[i - j - 1];
                str[i - j - 1] = tmp;
            }
        }
        str[i] = '\0';
    } else if (base == 10 || base == 16) {
        sprintf(str, base == 10 ? "%ld" : "%lx", value);
    }
}