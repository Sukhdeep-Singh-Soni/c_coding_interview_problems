/*calculate the number of vowels and consonants in a string*/

#include <stdio.h>
#define TOTAL_ALPHA_CNT     (26)
#define IS_VOWEL(c) ((c == 'a' || c == 'A') || \
                     (c == 'e' || c == 'E') || \
                     (c == 'i' || c == 'I') || \
                     (c == 'o' || c == 'O') || \
                     (c == 'u' || c == 'U'))?1:0

int count_vowels(char *s);

int main(void) {
    char str[] = "hello world with vowels";
    int cnt = count_vowels(str);
    printf("count of vowels is %d and consonants is %d\n", cnt, TOTAL_ALPHA_CNT - cnt);
    return 0;
}

int count_vowels(char *s) {
    char *c = s;
    int count = 0;
    while (*c) {
        if (IS_VOWEL(*c))
            count++;
        c++;
    }
    return count;
}