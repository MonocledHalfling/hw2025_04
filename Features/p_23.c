#include <stdio.h>

enum week { sun, mon, tue, wen, thu, fri, sat };

void p_23() {
    enum week day1 = fri;
    printf("day1 : %d\n", day1);
    printf("fri : %d\n", fri);

    day1 = mon;
    printf("day1 : %d\n", day1);
    printf("mon : %d\n", mon);
}
