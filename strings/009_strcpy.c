/*Copy one string to another without strcpy().*/

#include <stdio.h>

void copy_strings(char *, char*);

int main(void) {
    char str_src[] = "Hello World !";
    char str_dest[10] = {0};

    copy_strings(str_dest, str_src);   
    printf("copied string is %s\n", str_dest);
    return 0;
}

void copy_strings(char *to, char *from) {
    while ((*to++ = *from++))
        ;
}
