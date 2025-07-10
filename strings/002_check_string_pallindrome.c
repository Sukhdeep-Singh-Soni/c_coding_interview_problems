/*determine if a string is a palindrome*/
#include <stdio.h>

void reverse_string(char *s);
void copy_string(char*, char*);
int compare_string(char*, char*);

int is_string_pallindrome(char*);

int main(void) {
    char str[] = "Hollo!";
#if 1
    if (!is_string_pallindrome(str))
        printf("String is pallindrome\n");
    else
        printf("String is not pallindrome\n");  
#else
    char str_cpy[20];
    copy_string(str_cpy, str);
    reverse_string(str);
    if (compare_string(str_cpy, str) == 0)
        printf("String is pallindrome\n");
    else
        printf("String is not pallindrome\n");
#endif
    return 0;
}

void reverse_string(char *s) {
    int i, j;
    int len;
    char temp;

    //calculate length of a string
    for (len = 0; *(s+len) != '\0'; len++)
        ;
    //reverse the string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = temp;
    }
}

void copy_string(char *dest, char *src) {
    while ((*dest++ = *src++) != '\0')
        ;
}

int compare_string(char *str1, char *str2) {
    int i;
    int cmp_flag ;
    
    i=0;
    cmp_flag = 0;
    while (*(str1+i) != '\0' && *(str2+i) != '\0') {
        if (*(str1+i) != *(str2+i)) {
            cmp_flag = 1;
            break;
        }
        i++;
    }
    if (cmp_flag)
        return 1;
    return 0;
}

int is_string_pallindrome (char *str) {
    int start, end;
    int len;

    //calculate length of a string
    for (len = 0; *(str+len) != '\0'; len++)
        ;
    //2 pointer approach to find string is pallindrome or not
    for (start = 0, end = len - 1; start < end; start++, end--)
        if (*(str+start) != *(str+end))
            return 1;
    return 0;
}