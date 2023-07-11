// WAP to read two arrays of size 5 & store sum of these arrays into third array
#include <stdio.h>

int main() {
    int arr1[5], arr2[5], arr[5];

    for(int i=0; i <5; i++) {
        printf("Enter Elements of array1: ");
        scanf("%d", &arr1[i]);
        printf("Enter Elements of array2: ");
        scanf("%d", &arr2[i]);

        arr[i] = arr1[i] + arr2[i];
    }
    for(int i = 0; i < 5; i++) {
    printf("The New Array form at index %d is: %d \n", i, arr[i]);
    }
    return 0;
    }