/* Reverse words in a sentence. */

#include <stdio.h>

#define IN 1
#define OUT 0

void reverse_words(char*);
void reverse_word(char *s, int start, int end);

int main(void) {
    char str[] = "The words in this sentence will be reversed!";
    
    printf("string before - %s\n", str);
    reverse_words(str);
    printf("string after - %s\n", str);

    return 0;
}

void reverse_words(char* s) {
    int start = 0, end = 0, idx = 0;
    int state = OUT;

    while (*(s+idx)) {
        if (*(s+idx) == ' ' || *(s+idx) == '\t' || *(s+idx) == '\n') {
            if (state == IN)
                end = idx-1; // -1 for going one step back from space to the character index
            reverse_word(s, start, end);
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            start = idx;
        }
        idx++;
    }
    //handle string which don't end with space, newline or tab
    if (*(s+idx-1) != '\n' || *(s+idx-1) != ' ' || *(s+idx-1) != '\t')
        reverse_word(s, start, idx-1);
}

void reverse_word(char *s, int start, int end) {
    int i, j;
    char temp;
    //reverse the string
    for (i = start, j = end; i < j; i++, j--) {
        temp = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = temp;
    }
}
