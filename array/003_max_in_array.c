/*reverse a string*/
#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr_size = sizeof arr / sizeof arr[0];
    int max = 0;

    for (int i = 0; i < arr_size; i++)
        if (max < arr[i])
            max = arr[i];
    
    printf("max element in this array is %d\n", max);

    return 0;
}
