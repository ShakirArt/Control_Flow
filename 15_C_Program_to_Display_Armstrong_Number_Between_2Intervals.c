#include <stdio.h>

int main() {
    int i, n1, n2;
    int result;
    printf("Starting number : ");
    scanf("%d", &n1);
    printf("Ending number : ");
    scanf("%d", &n2);
    printf("Armstrong Numbers : ");
    for(i=n1;i<=n2; i++){
        result = arms(i);
        if(result==1){
            printf("%d  ",i);
        }
    }
}

int arms(int x) {
    int numb1, numb2;
    numb1 = x;
    int rem, n = 0, b = 0;
    while(numb1!=0) {
        numb1 = numb1/10;
        n++;
    }
    numb2 = x;
    while(numb2!=0) {
        rem = numb2%10;
        b = pow(rem,n)+b;
        numb2=numb2/10;
    }
    if(b==x){
        return 1;
    }
    else {
        return 0;
    }
}

