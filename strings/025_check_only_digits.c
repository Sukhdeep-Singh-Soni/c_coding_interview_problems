/*Check if the string contains only digits.*/

#include <stdio.h>

#define IS_DIGIT(c)     (c >= '0' && c <= '9') ? 1 : 0

int check_only_digits(char*);

int main(void) {
    char str[] = "1234343454545dfdfd";
    
    if (check_only_digits(str))
        printf("the string is not purely made up of digits\n");
    else
        printf("the string only contains digits\n");
    return 0;
}

int check_only_digits(char *s) {
    int only_digits = 0;

    while (*s) {
        if (!IS_DIGIT(*s)) {
            only_digits = 1;
            break;
        }
        s++;
    }
    return only_digits;
}