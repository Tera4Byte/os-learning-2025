#include <stdio.h>

int main() {
    /*
        Упражнение 1.9. Напишите программу, копирующую символы ввода в выходной поток и заменяющую 
        стоящие подряд пробелы на один пробел.
    */

    long c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);

            while((c = getchar()) == ' ') {;}
        }

        if (c != EOF) {putchar(c);}

        if (c == EOF) {
            break;
        }
    }

    return 0;
}