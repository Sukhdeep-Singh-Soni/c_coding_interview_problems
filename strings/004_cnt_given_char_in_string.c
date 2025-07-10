/*calculate the number of occurances of a given character in a string*/
#include <stdio.h>

#define IS_DIGIT(c)     (c >= '0' && c <= '9')?1:0     


int main(void) {
    char str[] = "12345ab45jhdhf12qaaaa";
    int i, count;
    char c = 'a';

    for (count = 0, i = 0; *(str+i) != '\0'; i++)
        if (*(str+i) == c)
            count++;
    printf("number of occurences of character %c in the string %s, is %d\n",c,str,count);
    return 0;
}

