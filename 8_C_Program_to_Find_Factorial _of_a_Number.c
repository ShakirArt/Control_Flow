#include <stdio.h>

int main() {
    int numbr, i, loop;
    printf("Enter a number : ");
    scanf("%d", &numbr);
    loop = numbr;
    for(i=1; i<loop; i++) {
        numbr=i*numbr;
    }
    printf("Factorial : %d", numbr);
    return 0;
}

