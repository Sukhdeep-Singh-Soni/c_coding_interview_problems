/*Count the occurances of a given word in a string.*/

#include <stdio.h>

#define IN  1
#define OUT 0

int count_words(char*, char*);
int compare_strings(char *str1, char *str2);

int main(void) {
    char str[] = "\t\t  Hello world this is a word count program which count the number of words"
                 " in an string.\t\t   Bye! countbyte count\n";
    char word[] = "count";
    printf("number of occurances of word '%s' is %d", word, count_words(str, word));
    return 0;
}

int count_words(char *s, char *given_word) {
    int word_state; //curent state of the word inside or outside
    int wc; //word count of each word
    char word[20] = {0}; //limiting a max word to be 20 characters
    int i;  //intex for string, used for start and end address indentification
    int same_word; //keep count of same word appearance in a string

    i = wc = same_word = 0;
    word_state = OUT;
    while (s[i]) {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
            word[wc] = '\0';
            wc = 0;
            if (compare_strings(word, given_word) == 0)
                same_word++;
            word_state = OUT;
        } else if (word_state == OUT){
            word_state = IN;
            word[wc] = s[i];
            wc++;
        } else if(word_state == IN) {
            word[wc] = s[i];
            wc++;
        }
        i++;
    }
    return same_word;
}

int compare_strings(char *str1, char *str2) {
    int i;

    for (i = 0; *(str1 + i) == *(str2 + i); i++)
        if (*(str1 + i) == '\0')
            return 0;
    return *(str1 + i) - *(str2 + i);
}    
