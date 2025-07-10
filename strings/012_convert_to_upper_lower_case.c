/*Convert string to upper case or lower case.*/

#include <stdio.h>

void convert_to_upper(char *s);
void convert_to_lower(char *s);

int main(void) {
    char str[] = "This string Will convert toLower first then toUpper second !";

    convert_to_lower(str);
    printf("to lower string - %s\n", str);
    convert_to_upper(str);
    printf("to upper string - %s\n", str);
    return 0;
}

void convert_to_upper(char *s) {
    while (*s) {
        if (*s >= 'a' && *s <= 'z')
            *s = *s - 0x20;
        s++;
    }
}

void convert_to_lower(char *s) {
  while (*s) {
        if (*s >= 'A' && *s <= 'Z')
            *s = *s + 0x20;
        s++;
    }
}