#include <stdio.h>

int main() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    if(number==0){
        printf("The number is Zero",number);
    }
    else if(number>0){
        printf("%d is Positive", number);
    }
    else{
        printf("%d is Nagetive", number);
    }
    return 0;
}
