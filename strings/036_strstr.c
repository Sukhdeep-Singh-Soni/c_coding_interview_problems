/*Implement strstr() - find substring inside a string.*/

#include <stdio.h>

int find_substring(char*, char*);
int get_string_length(char *s);

int main(void) {
    char str[] = "hello bye whole world";
    char substr[] = "bye";

    printf("substring index is %d",find_substring(str, substr));
}

// string1string2    string2
int find_substring(char *s, char *t) {
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (k = i, j = 0; t[j] != '\0' && t[j] == s[k]; j++, k++)
            ;
        if (t[j] == '\0')
            return i;
    }
    return -1;     
}


