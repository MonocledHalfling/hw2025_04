#include <stdio.h>

enum answer { NO, YES };

struct data {
    enum answer a;
    enum answer b;
};

void p_27() {
    const struct data d1 = {YES, NO};
    printf("%d | ", d1.a);
    printf("%d", d1.b);
}
