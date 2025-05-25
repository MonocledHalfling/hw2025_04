#include <stdio.h>
#include <string.h>

union uchr {
    char chr1;
    char chr2[3];
};

void p_21() {
    union uchr data;

    strncpy(data.chr2, "AB", sizeof(data.chr2) - 1);
    data.chr2[sizeof(data.chr2) - 1] = '\0';

    printf("data.chr1 = %c\n", data.chr1);
    printf("data.chr2 = %s\n", data.chr2);

    data.chr1 = 'C';
    printf("data.chr1 = %c\n", data.chr1);
    printf("data.chr2 = %s\n", data.chr2);
}
