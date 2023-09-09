#include <stdio.h>
int main() {
    int numbr;
    printf("Enter a number ");
    scanf("%d", &numbr);
    printf("The reverse number %d", val(numbr));
    return 0;
}

int val(int input) {
    int a = 0, c;
    while(input>0) {
        c = input%10;
        input = input/10;
        a = a*10;
        a = a + c;
    }
    return a;
}

