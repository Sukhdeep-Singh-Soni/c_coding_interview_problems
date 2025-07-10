/*program to Remove duplicate characters from a string.*/

#include <stdio.h>

unsigned int char_arr[256] = {0};

int remove_duplicate_chars(char *s);

int main(void) {
    char str[] = "This is a string where we keep count of each character in the string\n";
    remove_duplicate_chars(str);
    printf("%s", str);
    return 0;
}

int remove_duplicate_chars(char *s) {
    int i, j;

    for (i = 0, j = 0; *(s+i); i++) {
        if (char_arr[*(s+i)] == 0) {
            *(s + j) = *(s + i);
            j++;
        }
        char_arr[*(s+i)]++;
    }
    *(s+j) = '\0';
}
