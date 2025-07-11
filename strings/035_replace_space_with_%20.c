/*Relpace all spaces with %20 (like in URLs).*/

#include <stdio.h>

#define URL_NUM_CHARS_SPACE     (3)

void replace_spaces_with_percent20(char*);

int main(void) {
    char str[] = "I am name";
    replace_spaces_with_percent20(str);
    return 0;
}

// i am name  = i%20am%20name
void replace_spaces_with_percent20(char *s) {
    int spaces_cnt = 0;
    int str_len = 0;
    char *c = s;
    int i, j;

    //calculate number of spaces first
    while (*c++)
        if (*c == ' ')
            spaces_cnt++;
    
    //calculate length of whole string
    c = s;
    while (*c++)
        str_len++;
    
    //calculate the URL string length and create array of that length
    int url_len = (str_len - spaces_cnt) + (URL_NUM_CHARS_SPACE * spaces_cnt);
    char url[url_len+1]; //+1 for null
    printf("url length = %d\n", url_len);
    
    //replace spaces with percentage
    c = s;
    i = j = 0;
    while (*(c+i)) {
        if (*(c+i) != ' ') {
            *(url+j) = *(c+i);
            j++;
        } else {
            *(url+j) = '%';
            j++;
            *(url+j) = '2';
            j++;
            *(url+j) = '0';
            j++;
        }
        i++;
    }
    *(url+j) = '\0';
    printf("generated url = %s\n", url);
}