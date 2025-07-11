/*Sort characters in a string.*/

#include <stdio.h>

unsigned int char_arr[256] = {0};

int count_freq_of_each_char(char *s);
void print_char_arr(char *s);
void sort_chars(char*);

int main(void) {
    char str[] = "This Is A String wHere we keEp counNt of each character in the string\n!#";
    count_freq_of_each_char(str);
    //print_char_arr(str);
    sort_chars(str);
    printf("sorted characters - %s\n", str);
    return 0;
}

int count_freq_of_each_char(char *s) {
    while (*s) {
        char_arr[*s]++;
        s++;
    }
}

void print_char_arr(char *s) {
    while (*s) {
        printf("%c - %d\n", *s, char_arr[*s]);
        s++;
    }
}

void sort_chars(char *s) {
    for (int i = 0; i < 256; i++) {
        if (char_arr[i] >= 1) {
            *s = (char)i;
            s++;
        }
    }
    *s = '\0';
}