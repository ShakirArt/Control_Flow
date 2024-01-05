#include <stdio.h>

int main(){
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Fibonacci sequence :\n");
    for (i=0; i<n; i++) {
        printf("%d  ", Fibo(i));
    }
}

int Fibo (int n) {
    if (n==0){
        return 0;
    }
    else if (n==1) {
        return 1;
    }
    else {
        return Fibo(n-1)+ Fibo(n-2);
    }
}
