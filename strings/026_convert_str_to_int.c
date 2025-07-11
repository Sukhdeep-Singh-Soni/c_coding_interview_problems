/*Convert a string to integer (like atoi).*/

#include <stdio.h>

#define IS_DIGIT(c)     (c >= '0' && c <= '9') ? 1 : 0

int convert_str_to_int(char*);
int check_only_digits(char*);

int main(void) {
    char str[] = "1234";

    printf("converted number is %d\n", convert_str_to_int(str));

    return 0;
}

int convert_str_to_int(char *s) {
    int num = 0;

    if (!check_only_digits(s)) {
        while (*s) {
            num = num * 10 + (*s - '0'); //of *s - 0x48 both works the same
            s++;
        }
    } else {
        printf("error: string contains more than just numbers\n");
    }
    return num;
}

int check_only_digits(char *s) {
    int only_digits = 0;

    while (*s) {
        if (!IS_DIGIT(*s)) {
            only_digits = 1;
            break;
        }
        s++;
    }
    return only_digits;
}
