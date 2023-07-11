#include <stdio.h>


int main(){
    int a[5] = {0, -1, 11, 10, 2};
    int size = sizeof(a) / sizeof(a[0]); //calculate the size of the array
    for (int i = 0; i < 5; i++) {
    printf("%d",a[i]);
    printf("\n");

    }
    printf("\n");
    return 0;
}