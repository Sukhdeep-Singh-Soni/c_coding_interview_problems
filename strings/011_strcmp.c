/*Compare 2 strings without strcmp().*/

#include <stdio.h>

int compare_strings(char *, char*);

int main(void) {
    char str1[] = " It's a great day to enjoy!!";//"Hello World !";
    char str2[] = " It's a great day to enjoy!!";
    int ret;

    if (ret = compare_strings(str1, str2) == 0)
        printf("strings %s and %s are equal\n", str1, str2);
    else if (ret < 0)
        printf("string %s is less than string %s\n", str1, str2);
    else
        printf("string %s is greater than string %s\n", str1, str2);

    return 0;
}

// compare if string 1 comes in string 2
int compare_strings(char *str1, char *str2) {
    int i;

    for (i = 0; *(str1 + i) == *(str2 + i); i++)
        if (*(str1 + i) == '\0')
            return 0;
    return *(str1 + i) - *(str2 + i);
}    
