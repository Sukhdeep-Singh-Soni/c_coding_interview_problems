/*find the non-matching characters in a string*/
#include <stdio.h>

#define IS_ALPHANUMERIC(c)   ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))?1:0

int main(void) {
    char str[] = "12345ab45jhdhf12qaaaa";
    int i;
    int char_arr[256] = {0};

    i = 0;
    while (str[i] != '\0') {
        for (int num = 0; num < 256; num++) {
            if (str[i] == num) {
                char_arr[num]++;
                break;
            }
        }
        i++;
    }

    for (int i = 0; i < 256; i++)
        printf("%d ", char_arr[i]);
    printf("\n");
    

    printf("non matching characters - ");
    for (int i = 0; i < 256; i++) {
        if ((char_arr[i] == 1) && IS_ALPHANUMERIC(i))
            printf("%c ", i);
    }
    printf("\n");
    
    return 0;
}

