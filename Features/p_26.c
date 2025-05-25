#include <stdio.h>

struct patient {
    int age;
    unsigned sex: 1;
    unsigned drinking: 1;
    unsigned smoking: 1;
    unsigned marriage: 1;
};

void p_26() {
    struct patient a = {24, 0, 1, 1, 0};
    printf("age : %d\n", a.age);
    printf("sex : %d\n", a.sex);
    printf("drinking : %d\n", a.drinking);
    printf("smoking : %d\n", a.smoking);
}
