//total all of the matching integer elements in an array?

#include <stdio.h>
 int is_matched(int*, int, int);
int main(void) {
    int arr[] = {10, 3, 4, 3, 2, 6, 2, 1, 10, 9, 9, 3, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int match_arr[arr_size];
    int count = 0;
    int total = 0;
    int ele;

    for (int i = 0; i < arr_size; i++)
        match_arr[i] = 0;

    printf("array size : %d\n", arr_size);

    int i, j, k;
    k = 0;
    //calculate matching element
    for (i = 0; i < arr_size; i++) {
        ele = arr[i];
        for (j = i; j < arr_size; j++) {
            if (arr[j] == ele)
                count++;
        }
        if (count > 1) {
            if (is_matched(match_arr, ele, arr_size)) {
                total += arr[i] * count;
                if ( k < arr_size)
                    match_arr[k++] = arr[i];
                printf("total = %d\n", total);
            }
        }
        count = 0;
    }

    printf("total all the matching elements of the array are : %d\n", total);
    return 0;
}

int is_matched(int *marr, int ele, int size) {
    for (int i = 0; i < size; i++)
        if (ele == marr[i])
            return 0;
    return 1;
}