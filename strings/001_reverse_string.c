/*reverse a string*/
#include <stdio.h>

void reverse_string(char *s);

int main(void) {
    char str[] = "Hello World!";

    printf("String before - %s\n", str);

    reverse_string(str);

    printf("String after - %s\n", str);

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