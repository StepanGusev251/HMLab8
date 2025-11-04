#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    int a, n;
    long long product = 1;
    setlocale(LC_ALL, "RUS");
    // Ввод значений a и n
    printf("Введите значение a: ");
    scanf("%d", &a);
    printf("Введите значение n: ");
    scanf("%d", &n);

    // Вычисление произведения ряда
    for (int i = 0; i <= n; i++) {
        product = product * (a - i * n);
    }

    // Вывод результата
    printf("Произведение ряда: %lld\n", product);

    return 0;
}