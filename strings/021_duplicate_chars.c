/*Find duplicate characters in a string.*/

#include <stdio.h>

unsigned int char_arr[256] = {0};

int count_freq_of_each_char(char *s);
void print_char_arr(char *s);
void duplicate_chars(char *);

int main(void) {
    char str[] = "this is a string where we keep count of each character in the string\n";
    count_freq_of_each_char(str);
    print_char_arr(str);
    duplicate_chars(str);
    
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

void duplicate_chars(char *s) {
    printf("duplicate characters in a string are - ");
    for (int i = 0; i < 256; i++) {
        if (char_arr[i] > 1)
            printf("%c ", i);
    }
}