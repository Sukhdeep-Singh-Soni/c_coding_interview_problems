/*Remove special characters from a string.*/

#include <stdio.h>

#define IS_SPECIAL_CHAR(c)  ((c >= 'A' && c <= 'Z') || \
                             (c >= 'a' && c <= 'z') || \
                             (c >= '0' && c <= '9'))?0:1
void remove_special_chars(char *s);

int main(void) {
    char str[] = "The special characters in this string like @ spaces ! # ^ & \\ % will be removed\n";
    printf("string before - %s", str);
    remove_special_chars(str);
    printf("string after - %s", str);
}

void remove_special_chars(char *s) {
    int i, j;

    i = j = 0;
    while (*(s+i)) {
        if (!IS_SPECIAL_CHAR(*(s + i))) {
            *(s+j) = *(s+i);
            j++;
        }
        i++;
    }
    *(s+j) = '\0';
}