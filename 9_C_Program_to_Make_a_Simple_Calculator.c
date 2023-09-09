#include <stdio.h>

int main() {
     float numbr1, numbr2, sol;
     char oprt;
     do {
        printf("[To stop press x]\nEnter an operator (+, -, *, /) :  ");
        scanf(" %c", &oprt);

        if(oprt==120) {
            break;
        }

        printf("1st number : ");
        scanf("%f", &numbr1);
        printf("2nd number : ");
        scanf("%f", &numbr2);

        switch(oprt) {
            case '+':
                sol = numbr1+numbr2;
                printf("Sum : %f\n", sol);
                break;
            case '-':
                sol = numbr1-numbr2;
                printf("Difference : %f\n", sol);
                break;
            case '*':
                sol = numbr1*numbr2;
                printf("Product : %f\n", sol);
                break;
            case '/':
                sol = numbr1/numbr2;
                printf("Product : %f\n", sol);
                break;
            default:
                printf("Enter a valid operator\n", sol);
                break;
        }

     }
     while(1);

     return 0;
}
