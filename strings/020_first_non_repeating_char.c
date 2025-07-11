/*Find the first non repeating character in a string.*/

#include <stdio.h>

unsigned int char_arr[256] = {0};

int count_freq_of_each_char(char *s);
void print_char_arr(char *s);
char get_first_non_repeating_char(char *);

int main(void) {
    char str[] = "this is a string where we keep count of each character in the string\n";
    count_freq_of_each_char(str);
    print_char_arr(str);
    printf("first non repeating character = %c\n", get_first_non_repeating_char(str));
    
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

char get_first_non_repeating_char(char *s) {
   while (*s) {
        if (char_arr[*s] == 1)
            return *s;
        s++;
   }
}