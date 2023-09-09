#include <stdio.h>

int main() {
    int numbr, i;
    printf("Enter Number : ");
    scanf("%d", &numbr);
    printf("Factors of %d : ", numbr);
    for(i=1; i<=numbr; i++) {
        if(numbr%i==0) {
            printf("%d  ", i);
        }
    }
}
