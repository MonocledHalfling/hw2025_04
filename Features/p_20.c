#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct product {
    char name[20];
    int price;
};

void p_20() {
    struct product data[3] = {
        {"골프", 20000},
        {"탁구", 10000},
        {"샤워", 5000}
    };

    char buys[100];
    printf("구매 목록 입력 (예: 골프4 샤워2 탁구2): ");
    fgets(buys, sizeof(buys), stdin);
    buys[strcspn(buys, "\n")] = '\0';

    char money[100];
    printf("금액을 입력하고 Enter> ");
    fgets(money, sizeof(money), stdin);
    int paid = atoi(money);

    // 구매 목록을 복사해 영수증용과 매출전표용 두 번 사용
    char buys_copy[100];
    strcpy(buys_copy, buys);
    int my_money = 0;

    // 영수증 출력
    printf("\n영수증\n종목\t수량\t단가\t금액\n");
    printf("-----------------------------------\n");

    char *token = strtok(buys, " ");
    int total = 0;
    while (token != NULL) {
        char item[20];
        int qty = 0;

        int len = strlen(token);
        int i = len - 1;
        while (i >= 0 && token[i] >= '0' && token[i] <= '9') i--;

        strncpy(item, token, i + 1);
        item[i + 1] = '\0';
        qty = atoi(&token[i + 1]);

        for (int j = 0; j < 3; j++) {
            if (strcmp(item, data[j].name) == 0) {
                int amount = data[j].price * qty;
                printf("%s\t%d\t%d\t%d\n", item, qty, data[j].price, amount);
                total += amount;
                break;
            }
        }

        token = strtok(NULL, " ");
    }
    printf("총액 금액:\t\t\t%d 원\n", total);
    printf("잔돈:\t\t\t%d 원\n", paid - total);
    my_money = paid - total;

    // 매출전표 출력
    printf("\n매출전표\n종목\t수량\t단가\t금액\n");
    printf("-----------------------------------\n");

    token = strtok(buys_copy, " ");
    while (token != NULL) {
        char item[20];
        int qty = 0;

        int len = strlen(token);
        int i = len - 1;
        while (i >= 0 && token[i] >= '0' && token[i] <= '9') i--;

        strncpy(item, token, i + 1);
        item[i + 1] = '\0';
        qty = atoi(&token[i + 1]);

        for (int j = 0; j < 3; j++) {
            if (strcmp(item, data[j].name) == 0) {
                int amount = data[j].price * qty;
                printf("%s\t%d\t%d\t%d\n", item, qty, data[j].price, amount);
                break;
            }
        }

        token = strtok(NULL, " ");
    }

    printf("\n총액 : \t\t\t%d 원\n", my_money);
}