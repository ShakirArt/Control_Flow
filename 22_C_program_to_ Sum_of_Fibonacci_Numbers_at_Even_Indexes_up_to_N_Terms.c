#include <stdio.h>

int main(){
    int n, i, numb, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i=0; i<=(n*2); i++) {
        if (i%2==0) {
            numb = Fibo(i);
            sum = sum+numb;
        }
    }
    printf("Sum of Fibonacci Numbers at Even Indexes up to %d Terms : %d", n, sum);
}

int fibo (int a){
    int r;
    r = Fibo(a);
    return r;
}

int Fibo (int f) {
    int r;
    if (f==0){
        return 0;
    }
    else if (f==1) {
        return 1;
    }
    else {
        r= fibo(f-1)+ fibo(f-2);
        return r;
    }
}
