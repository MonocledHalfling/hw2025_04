#include <stdio.h>

struct computer {
    char name[20];
    int price;
    int count;
};

void p_19() {
    struct computer data[5] = {
        {"hard disk", 135000, 5},
        {"CPU", 235000, 7},
        {"main board", 162000, 9},
        {"monitor", 260000, 4},
        {"DVD-RW", 73500, 6}
    };
    printf("%-15s %-10s %-10s %-10s\n", "품명", "단가", "수량", "금액");

    int total = 0;
    for (int i = 0; i < 5; i++) {
        int amount = data[i].price * data[i].count;
        printf("%-15s %-10d %-10d %-10d\n", data[i].name, data[i].price, data[i].count, amount);
        total += amount;
    }

    printf("\n총 금액: %d 원\n", total);
}
