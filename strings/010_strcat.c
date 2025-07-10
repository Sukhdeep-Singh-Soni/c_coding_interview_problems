/*Concatinate 2 strings without strcat().*/

#include <stdio.h>

void concatinate_strings(char *, char*);

int main(void) {
    char src[] = "Hello World !";
    char to_concat[] = " It's a great day to enjoy!!";

    concatinate_strings(src, to_concat);

    printf("Whole string after concatination is %s\n", src);
    return 0;
}

void concatinate_strings(char *src, char *to_concat) {
    int i = 0;
    //go to the end of string src
    while (*src)
        src++;
    
    //concat to_concat string from end of src
    while (*src++ = *to_concat++)
        ;
}
