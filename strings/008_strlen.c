/* Find length of a string without using strlen(). */

#include <stdio.h>
int get_string_length(char *);
int main(void) {
    char str[] = "Hello World !";

    printf("string length of string %s is %d\n",str,get_string_length(str));
    return 0;
}

int get_string_length(char *s) {
    int i;
    char *c;

    i = 0;
    c = s;

    while (*c++)
        i++;
    return i;
}
