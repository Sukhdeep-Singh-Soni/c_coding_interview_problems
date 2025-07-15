/*
Insert a substring into another string.
*/

#include <stdio.h>

void insert_substring(char*, char*, int idx);
int get_string_length(char *s);

int main(void) {
    char str1[20] = "hello world";
    char str2[6] = "whole";

    printf("string before insertion - %s\n", str1);
    insert_substring(str1,str2, 6);
    printf("string after insertion - %s\n", str1);
}

// insert s2 into s1
void insert_substring(char *s1, char *s2, int idx) {
    int i = 0;
    
    int l1, l2;

    l1 = get_string_length(s1);
    l2 = get_string_length(s2);
    printf("strlen %d %d ", l1, l2);
    if (idx >= l1)
        return;
    
    for (i = l1; i >= idx; i--)
        s1[i + l2 + 1] = s1[i]; // + 1 for reserving space for a ' ' space character
    for (i = 0; i < l2; i++)
        s1[i + idx] = s2[i];
    s1[i + idx] = ' ';  // adding a space character at last location of s2
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

