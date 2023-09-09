#include <stdio.h>

int main() {
    int input, sum;
    printf("Enter a number : ");
    scanf("%d", &input);
    sum = neon(input);
    if(input==sum){
        printf("Yes");
    }
    else {
        printf("No");
    }
}

int neon(int numb) {
    int sqr, sum = 0, rem;
    sqr = numb*numb;
    while (sqr!=0) {
        rem = sqr%10;
        sqr = sqr/10;
        sum = rem+sum;
    }
    return sum;
}
