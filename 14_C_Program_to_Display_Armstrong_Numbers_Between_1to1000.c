#include <stdio.h>

int main() {
    int i;
    int result;
    printf("Armstrong Numbers : ");
    for(i=1;i<=1000; i++){
        result = arms(i);
        if(result==1){
            printf("%d  ",i);
        }
    }
}

int arms(int x) {
    int numb1, numb2;
    numb1 = x;
    int rem, n = 0, arms = 0;
    while(numb1!=0) {
        numb1 = numb1/10;
        n++;
    }
    numb2 = x;
    while(numb2!=0) {
        rem = numb2%10;
        arms = pow(rem,n)+arms;
        numb2 = numb2/10;
    }
    if(arms==x){
        return 1;
    }
    else {
        return 0;
    }
}
