#include <stdio.h>

int main() {
    int numbr1, numbr2;
    printf("Enter the 1st number : ");
    scanf("%d", &numbr1, &numbr2);
    printf("Enter the 2nd number : ");
    scanf("%d", &numbr2);
    printf("LCM : %d", lcm(numbr1, numbr2));
}

int lcm(int a, int b) {
    int r = 1;
    while (1) {
        if (a%2==0 && b%2==0) {
            a = a/2;
            b = b/2;
            r = 2*r;
        }
        else if (a%3==0 && b%3==0) {
            a = a/3;
            b = b/3;
            r = 3*r;
        }
        else if (a%5==0 && b%5==0) {
            a = a/5;
            b = b/5;
            r = 5*r;
        }
        else if (a%7==0 && b%7==0) {
            a = a/7;
            b = b/7;
            r = 7*r;
        }
        else {
            r = a*b*r;
            break;
        }
    }
    return r;
}


