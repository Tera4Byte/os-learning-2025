#include <stdio.h>

int main() {
    //Упражнение 1.8. Напишите программу для подсчета пробелов, табуляций и новых строк.

    long blanks = 0, tabs = 0, newlines = 0, c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++newlines;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == ' ') {
            ++blanks;
        }

        if (c == EOF) {
            break;
        }
    }

    printf("Количество пробелов: %ld\n", blanks);
    printf("Количество табуляций: %ld\n", tabs);
    printf("Количество новых строк: %ld\n", newlines);

    return 0;
}