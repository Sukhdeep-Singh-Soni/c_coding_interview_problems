/*Longest word in a string.*/

#include <stdio.h>

#define IN  1
#define OUT 0

void count_words(char *s);

int main(void) {
    char str[] = "\t\t  Hello world this is a word count program which count the number of words"
                 " in an string.\t\t   Bye!\n";
    count_words(str);
    return 0;
}

void count_words(char *s) {
    int word_state; //curent state of the word inside or outside
    int wc; //word count of each word
    int max, min; //keep track of max and min word via word count
    char word[20] = {0}; //limiting a max word to be 20 characters
    int i;  //intex for string, used for start and end address indentification
    int max_word_start = 0; //start idx of max word
    int max_word_end = 0;   //end idx of max word
    int start_idx = 0;   //current word start idx
    int end_idx = 0;    //current word end idx

    i = wc = max = 0;
    min = 20;   //assuming a maximum word be of 20 character in length
    word_state = OUT;
    while (s[i]) {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
            end_idx = i;
            if (wc > max) {
                max = wc;
                max_word_start = start_idx;
                max_word_end = end_idx - 1;
            }
            word[wc] = '\0';
            wc = 0;
            word_state = OUT;
        } else if (word_state == OUT){
            word_state = IN;
            start_idx = i;
            word[wc] = s[i];
            wc++;
        } else if(word_state == IN) {
            word[wc] = s[i];
            wc++;
        }
        i++;
    }
    printf("max word is = ");
    for (int i = max_word_start; i <= max_word_end; i++)
        printf("%c", s[i]);
    printf("\n");
}
