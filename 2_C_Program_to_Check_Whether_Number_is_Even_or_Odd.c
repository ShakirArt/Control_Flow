#include <stdio.h>
#include <math.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(((number>>1)<<1) == number)
    {
       printf("%d is even", number);
    }
    else{
        printf("%d is odd", number);
    }
    return 0;
}

