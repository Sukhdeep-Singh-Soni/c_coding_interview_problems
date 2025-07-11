/*Find the most frequent character in a string.*/

#include <stdio.h>

unsigned int char_arr[256] = {0};

int count_freq_of_each_char(char *s);
void print_char_arr(char *s);
void most_freq_char(char *s);

int main(void) {
    char str[] = "This is a string where we keep count of each character in the string\n";
    count_freq_of_each_char(str);
    print_char_arr(str);
    most_freq_char(str);
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

void most_freq_char(char *s) {
    int max = 0;
    char max_char;

    while (*s) {
        if (*s != ' ') {    //skipping spaces
            if (char_arr[*s] > max) {
                max = char_arr[*s];
                max_char = *s;
            }
        }
        s++;
    }
    printf("most frequent character = %c\n", max_char);
}