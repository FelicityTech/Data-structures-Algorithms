#include <stdio.h>

// WAP to read marks of n students calculate Sum & average using array

int main() {
    int n;
    int mark[5];
    int sum=0, avg;
    // printf("how many students: ");
    // scanf("%d", &5);
    for(int i = 0; i < 5; i++) {
        printf("Enter the marks: ");
        scanf("%d", &mark[i]);
    }
    for(int i=0; i < 5; i++){
        sum = sum + mark[i];
    }
    avg = sum / 5;
    printf("The Sum of the Marks is %d and the average is %d", sum, avg);
    return 0;
}