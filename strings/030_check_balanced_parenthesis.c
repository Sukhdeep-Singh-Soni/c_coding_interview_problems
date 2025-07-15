/*
Check for balanced parenthesis in a string.
*/

#include <stdio.h>

int check_balanced_paranthesis(char*);

int main(void) {
    char str[] = "This program will check (balanced {patenthesis} and [brackits})";

    if (check_balanced_paranthesis(str))
        printf("paranthesis is balanced\n");
    else
        printf("parenthesis is not balanced\n");

    return 0;
}

int check_balanced_paranthesis(char *s) {
    void push(char c);
    char pop(void);
    
    while (*s) {
        if (*s == '(' || *s == '{' || *s == '[')
            push(*s);
        if (*s == ')')
            if (((pop()) != '('))
                return 0;
        if (*s == '}')
            if (((pop()) != '{'))
                return 0;
        if (*s == ']')
            if (((pop()) != '['))
                return 0;
        s++;
    }
    return 1;
}


#define STACKSIZE   100
static char buffer[STACKSIZE];
static char bufp = -1;

void push(char c) {
    if (bufp >= STACKSIZE)
        printf("error: stack full\n");
    else
        buffer[++bufp] = c;
}

char pop(void) {
    if (bufp < 0)
        printf("error: stack empty\n");
    else
        return buffer[bufp--];
}

