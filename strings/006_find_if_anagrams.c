/*find out if the two given strings are anagrams*/

/*reverse a string*/
#include <stdio.h>

int is_anagram(char*, char*);

int main(void) {
    char str1[] = "decimal";
    char str2[] = "claimed";

    int ret = is_anagram(str1, str2);

    if (!ret)
        printf("the strings %s and %s are anagrams\n", str1, str2);
    else
        printf("the strings %s and %s are not anagrams\n", str1, str2);

    return 0;
}

/* anargam e.g. -> "mug" "gum" string length same and characters used are also same but jumbled*/
int is_anagram(char *s1, char *s2) {
    int len1, len2;
    //get the length of 2 strings if they don't match then they are not anagrams
    //calculate length of a string 1
    for (len1 = 0; *(s1+len1) != '\0'; len1++)
        ;
    //calculate length of a string 2
    for (len2 = 0; *(s2+len2) != '\0'; len2++)
        ;
    
    if (len1 != len2) {
        printf("is_anagram: length not match\n");
        return 1;
    }
    else {
        //compare the characters in the strings
        int j = 0;
        int i;
        for (i = 0; j < len1; i++) {
            if (s1[j] == s2[i]) {
                i = -1;
                j++;
            } else if (i >= len1) {
                printf("is_anagram: characters not match\n");
                return 1;
            }
        }
    }
    return 0;
}

/*
Some suggestions for improvement in the code
- can also do by cheking length then sort the strings and then compare the strings for equality. 
- handle case sensitive strings by converting the chars in tolower before comparing
*/