#include <stdio.h>
/* копирование ввода на вывод; 1-я версия */
int main()
{
    //int c;
    
    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }

    int c, result;

    printf("=== Проверка выражения getchar() != EOF ===\n\n");
    printf("Введите символы (Ctrl+D для EOF):\n");

    while (1) {
        c = getchar();
        result = (c != EOF);

        printf("Символ: ");

        if (c == EOF) {
            printf("EOF\n");
        } else if (c == '\n') {
            printf("\\n (новая строка)");
        } else if (c >= 32 && c <= 126) {
            printf("'%c' (код %d)", c, c);
        } else {
            printf("(непечатный, код %d)", c);
        }
        
        printf(" | c != EOF = %d\n", result);
        
        // Если получили EOF - выходим
        if (c == EOF) {
            break;
        }
    }

    printf("\n=== Вывод ===\n");
    printf("Выражение 'c != EOF' возвращает:\n");
    printf("  1 - когда символ НЕ равен EOF\n");
    printf("  0 - когда символ равен EOF\n");

    return 0;
}