/*Toggle case of each character in a string.*/

#include <stdio.h>

#define IS_ALPHA(c)     (((c) >= 'a' && (c) <= 'z') || \
                         ((c) >= 'A' && (c) <= 'Z'))?1:0 

#define IS_LOWER(c)     ((c) >= 'a' && (c) <= 'z')?1:0

void toggle_char_case(char*);

int main(void) {
    char str[] = "This is a string where we toggle each character in a string";
    printf("string before - %s\n", str);
    toggle_char_case(str);
    printf("string after - %s\n", str);
    return 0;
}

void toggle_char_case(char* s) {
    int i;
    
    i = 0;
    while (*(s + i))  {
        if (!IS_ALPHA(*(s + i))) {
            ;   //skip special characters and numbers
        } else {
            if (i % 2 == 0) {
                if (!IS_LOWER(*(s+i)))
                    *(s+i) = *(s+i) + 0x20;
            } else {
                if (IS_LOWER(*(s+i)))
                    *(s+i) = *(s+i) - 0x20;
            }
        }
        i++;
    } 
}
