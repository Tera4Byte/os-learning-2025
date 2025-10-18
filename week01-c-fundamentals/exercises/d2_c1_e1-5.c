#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;

    printf("Фаренгейт | Цельсий\n");

    // while (fahr <= upper) {
    //     celsius = (5.0/9.0) * (fahr-32.0);
    //     printf ("%3.0f %6.1f\n", fahr, celsius);
    //     fahr += step;
    // }
    
    /* 
        Упражнение 1.5 из книги Кернигана и Ритчи.
        Изменить программу преобразования температур так, чтобы она печатала таблицу в
        обратном порядке, т. е. от 300 до 0.
    */
    
    for(fahr = upper; fahr >= lower; fahr -= step) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf ("%3.0f %6.1f\n", fahr, celsius);
    }
    
    return 0;
}