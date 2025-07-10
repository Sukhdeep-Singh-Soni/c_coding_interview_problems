/*reverse a string*/
#include <stdio.h>

void reverse_array(int *s, int size);

int main(void) {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr_size = sizeof arr / sizeof arr[0];

    printf("Array before : ");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    reverse_array(arr, arr_size);

    printf("Array after : ");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}

void reverse_array(int *s, int len) {
    int i, j;
    char temp;

    //reverse the string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = temp;
    }
}