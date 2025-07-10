#include <stdio.h>

int fabo_recursion(int,int,int);
int fabo_iteration(int,int,int,int);
int main(void) {
    int a = 0;
    int b = 1;
    int c = 0;
    int len = 10;
    // fabo_iteration(a, b, c, len);
    printf("%d %d ", a, b);
    fabo_recursion(a,b,len);
}

int fabo_iteration(int a, int b, int c , int len) {
    printf("%d %d ",a,b);
    for (int i = 2; i <= len; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int fabo_recursion(int a,int b,int len) {
#if 0
    if (len > 0) {
        printf ("%d ", c);
        c = a + b;
        fabo_recursion(b,c,b,len-1);
    }
#endif
    if (len < 3)
        return 0;
    
    int c = a + b;
    printf("%d ", c);
    
    return fabo_recursion(b, c, len-1);
}

