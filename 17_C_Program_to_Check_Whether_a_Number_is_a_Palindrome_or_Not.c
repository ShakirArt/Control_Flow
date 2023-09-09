#include <stdio.h>
int main() {
    int numbr;
    printf("Enter a number ");
    scanf("%d", &numbr);
    if (numbr==val(numbr)) {
        printf("Yes");
    }
    else {
        printf("Yes");
    }
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


