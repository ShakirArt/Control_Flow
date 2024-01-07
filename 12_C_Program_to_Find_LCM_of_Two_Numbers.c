
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
    int rem, divi, max;
    if(a > b) {
       max = a;
       divi = b;
    }
    else {
        max = b;
        divi = a;
    }

    if(divi == 0) {
       return max;
    }
    else {
        while((max % divi) != 0) {
            rem = max % divi;
            max = divi;
            divi = rem;
        }
        return divi;
    }
}
