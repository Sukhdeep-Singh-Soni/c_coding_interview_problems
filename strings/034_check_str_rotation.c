/* Check if one string is a rotation of another
A rotation of a string is a string that contains the same characters but in a different order.
Specifically, one or more characters are shifted from the original position. For example,
the string “cdab” is a rotation of “abcd”.
*/

#include <stdio.h>

int check_str_char_match(char*, char*);
int get_string_length(char *s);
int check_rotation(char*,char*,int);

int main(void) {
    char str1[] = "hello";
    char str2[] = "elloh";
    int len = 0;

    if (len = check_str_char_match(str1, str2)) {
        if (check_rotation(str1, str2, len))
            printf("%s is a rotation of %s\n", str1, str2);
        else
            printf("%s is not a rotation of %s\n", str1, str2);
        }
    return 0;
}

// str1 = string1,  str2 = 1string
int check_str_char_match(char* str1, char* str2) {
    //get string length of both strings
    int len1 = get_string_length(str1);
    int len2 = get_string_length(str2);
    int i, j;

    if (len1 == len2) {
        //check if elements are there of not
        for (i = 0, j = 0; j < len1; i++) {
            if (str1[j] == str2[i]) {
                i = -1;
                j++;
            } else if (i >= len1) {
                printf("characters don't match\n");
                return 0;
            }
        }
    } else {
        printf("length don't match\n");
        return 0;
    }
    return len1;
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

/*
   char str1[] = "hello";
    char str2[] = "lohel";
*/
int check_rotation(char *s1,char *s2, int len) {
    //calculate shift
    int shift = 0;
    while (*(s2+shift)) {
        if (*(s2+shift) == *s1)
            break;
        shift++;
    }
    
    //check that each element is at its correct position after shift amount
    int i;
    for (i = 0; *(s1+i) != '\0'; i++) {
        if (s1[i] != s2[(i + shift) % len]) {
            printf("%d %c %c\n",i, s1[i], s2[i]);
            return 0; //not a rotation
        }
    }
    return 1;
}




