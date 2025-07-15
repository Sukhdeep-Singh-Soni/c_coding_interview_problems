/*
Delete a substring from a string.
*/
#include <stdio.h>

void delete_substring(char *s1, char*s2, int idx);
int find_substring(char *s, char *t);
int get_string_length(char *s);

int main(void) {
    char str1[] = "hello world from string";
    char str2[] = "from";
    int idx;

    printf("string before - %s\n", str1);
    if ((idx = find_substring(str1, str2)) != -1) {
        delete_substring(str1, str2, idx);
        printf("string after - %s\n", str1);
    } else {
        printf("substring does not exist\n");
    }
    return 0;
}

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

void delete_substring(char *s1, char*s2, int idx) {
    int i;
    int l1, l2;

    l1 = get_string_length(s1);
    l2 = get_string_length(s2);
    for (i  = 0; i < l1 - l2 - idx; i++) { // l1 = 15, l2 = 3 idx = 6, i last val < 13 - 5 - 6 = 2
        s1[i + idx] = s1[i + idx + l2]; // 0 + 6 + 5 = 11 index
    }
    s1[i + idx] = '\0';
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

