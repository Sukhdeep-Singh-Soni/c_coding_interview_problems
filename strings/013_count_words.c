/*Count words in a string.*/

#include <stdio.h>

#define IN  1
#define OUT 0

int count_words(char *s);

int main(void) {
    char str[] = "\t\t  Hello world this is a word count program which count the number of words"
                 " in a string.\t\t   Bye!\n";
    printf("word count of string %s is %d\n", str, count_words(str));
}

int count_words(char *s) {
    int word_state;
    int wc; //word count

    wc = 0;
    word_state = OUT;
    while (*s) {
        if (*s == ' ' || *s == '\t' || *s == '\n')
            word_state = OUT;
        else if (word_state == OUT){
            word_state = IN;
            wc++;
        }
        s++;
    }
    return wc;
}
