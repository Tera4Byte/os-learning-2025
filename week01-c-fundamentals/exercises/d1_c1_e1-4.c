#include <stdio.h>

/* печать таблицы температур по Цельсию и Фаренгейту для
fahr = 0, 20 ... 300; вариант с плавающей точкой */

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -20; /* нижняя граница таблицы температур */
    upper = 40; /* верхняя граница */
    step = 20; /* шаг */
    celsius = lower;

    printf("Цельсий | Фаренгейт\n");

    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf ("%3.0f %6.1f\n", fahr, celsius);
        celsius += step;
    }

    return 0;
}