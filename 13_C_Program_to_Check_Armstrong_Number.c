#include <stdio.h>

int main() {
    int a, num1, num2, rem, n = 0, arms = 0;
    printf("Enter a number ");
    scanf("%d", &a);
    num1 = a;
    while(num1!=0) {
        num1 = num1/10;
        n++;
    }
    num2 = a;
    while(num2!=0) {
        rem = num2%10;
        arms = pow(rem,n)+arms;
        num2 = num2/10;
    }
    if(arms==a){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
