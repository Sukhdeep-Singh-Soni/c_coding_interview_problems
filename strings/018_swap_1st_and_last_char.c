/*Swap first and last characters of a string.*/

#include <stdio.h>

void swap_first_and_last_char(char*);
int get_string_length(char *s);

int main(void) {
    char str[] = "In this string the first and last character will be swapped";
    printf("string before - %s\n", str);
    swap_first_and_last_char(str);
    printf("string after - %s\n", str);  
}

void swap_first_and_last_char(char* s) {
    int first = 0;
    int last = get_string_length(s) - 1;
    s[first] = s[first] + s[last];
    s[last] = s[first] - s[last];
    s[first] = s[first] - s[last];
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