#include <stdio.h>

union data {
    char ch;
    int n;
};

void p_22() {
    union data v;
    printf("%lu\n", sizeof(union data));
    v.ch = 'A';
    printf("%lu\n", sizeof(v.ch));
    v.n = 25;
    printf("%lu\n", sizeof(v.n));
}