#include <stdio.h>

enum prod { engine = 3, battery, filter, fuse };

void p_24() {
    enum prod v = battery;
    printf("number : %d\n", v);
    printf("engine number : %d\n", engine);

    v = fuse;
    printf("number : %d\n", v);
}
