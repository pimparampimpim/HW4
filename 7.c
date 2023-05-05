#include <stdio.h>

int main () {
    int plus = 0;//положительные
    int minus = 0;//отрицательные
    int zero = 0;//нолики
    int chicla;//основные числа
    int m;//кол-во основных чисел
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {//джаст ду ит
        scanf("%d", &chicla);//вводим основные числа
        if (chicla > 0) {//счетчик положительных чисел
            plus = plus + 1;
        }
        else if (chicla < 0) {//счетчик отрицательных чисел
            minus = minus + 1;
        }
        else if (chicla == 0) {//нейтральный счетчик
            zero = zero + 1;
        }
    }
    printf("%d %d %d", zero, plus, minus);//вывод нулей положительных и отрицательных
    return 0;
}