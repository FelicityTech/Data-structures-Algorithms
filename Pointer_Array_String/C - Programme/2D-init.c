#include<stdio.h>

int main() {
    int a[2][3] = {1,2,3,4,5,6};
    int j, i;
    int sum = 0;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++)
        printf("index of 2D at %d\n", a[i][j]);\
        sum = sum + a[i][j];
    }
    printf("The sum of the 2D array elements id %d", sum);
}