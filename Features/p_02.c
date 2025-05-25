#include <stdio.h>

int plus(int a, int b);

void p_02(void) {
    const int a = 3;
    const int b = 5;
    int (*pt)(int a, int b) = plus;
    printf("result = %d\n", pt(a, b));
    printf("result = %d\n", plus(a, b));
}

int plus(int a, int b) {
    return a + b;
}
