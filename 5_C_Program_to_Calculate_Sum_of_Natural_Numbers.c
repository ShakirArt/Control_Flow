#include <stdio.h>

int main() {
    int numbr, sum;
    printf("Enter a number n : ");
    scanf("%d", &numbr);
    sum = (numbr*(numbr+1))/2;
    printf("Sum of Natural Numbers : %d", sum);
    return 0;
}
