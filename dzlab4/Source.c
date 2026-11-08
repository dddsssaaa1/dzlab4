#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    int a, b, condition;

    printf("=== СИСТЕМА ДОСТУПА В КОВОРКИНГ ===\n");

    printf("Введите код сканера по лицу (A): ");
    scanf("%d", &a);

    printf("Введите код сканера по карте (B): ");
    scanf("%d", &b);

    condition = (a % 2 == 0) != (b % 2 == 0);

    printf("Дверь открыта (1 - да, 0 - нет): %d\n", condition);

    return 0;
}