/*Remove spaces from a string.*/

#include <stdio.h>

void remove_spaces(char *s);

int main(void) {
    char str[] = "The spaces will get removed from this string\n";
    printf("string before - %s", str);
    remove_spaces(str);
    printf("string after - %s", str);
}

void remove_spaces(char *s) {
    int i, j;

    i = j = 0;
    while (*(s+i)) {
        if (*(s+i) != ' ') {
            *(s+j) = *(s+i);
            j++;
        }
        i++;
    }
    *(s+j) = '\0';
}