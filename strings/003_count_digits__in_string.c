/*calculate the number of numerical digits in a string*/
#include <stdio.h>

#define IS_DIGIT(c)     (c >= '0' && c <= '9')?1:0     


int main(void) {
    char str[] = "12345ab45jhdhf12q";
    int i, count;
    
    for (count = 0, i = 0; *(str+i) != '\0'; i++)
        if (IS_DIGIT(*(str+i)))
            count++;
    printf("number of numerical digits in this string is %d\n", count);
    return 0;
}

