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
