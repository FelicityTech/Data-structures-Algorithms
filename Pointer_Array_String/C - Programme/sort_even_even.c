#include <stdio.h>
// WAP to read an array of 10 integers and count total No. of even & odd

int main() {
    int integers[10];
    int even=0, odd=0, i;

    for(i =0; i < 10; i++){
    printf("Enter Array Elements: ");
    scanf("%d", &integers[i]);
    // }
    // for(i=0; i < 10; i++){
        if (integers[i]%2 == 0)
        {
            even = even + 1;
        } else
        {
            odd = odd + 1;
        }
    }
    printf("the even and odds integers are %d -- %d respectively", even, odd);
}