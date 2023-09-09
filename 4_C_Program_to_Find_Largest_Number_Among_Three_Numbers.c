#include <stdio.h>

int main() {
    int numbr1, numbr2, numbr3, large;
    printf("Enter the 1st number : ");
    scanf("%d", &numbr1);
    printf("Enter the 2nd number : ");
    scanf("%d", &numbr2);
    printf("Enter the 3rd number : ");
    scanf("%d", &numbr3);
    large = numbr1;
    if(large<numbr2) {
        if(large<numbr3) {
            large = numbr3;
            printf("The largest number : %d", large);
        }
        else {
            large = numbr2;
            printf("The largest number : %d", large);
        }
    }
    else if(large<numbr3) {
        large = numbr3;
        printf("The largest number : %d", large);

    }
    else {
        printf("The largest number : %d", large);
    }
    return 0;
}
