// sort an array of integers in ascending order
#include <stdio.h>
void swap(int *, int *);
int main(void) {
    int arr[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int arr_size = sizeof arr / sizeof arr[0];
    
    for (int i = 0; i < arr_size; i++) {
        for (int j = i+1; j < arr_size; j++) {
            if (arr[i] > arr[j])
                swap(arr+i, arr+j);
        }
    }
    
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    return 0;
}
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
