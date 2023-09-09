#include <stdio.h>
int main() {
    int n1, n2, i, j;
    int flag = 0;
    printf("Starting number : ");
    scanf("%d", &n1);
    printf("Ending number : ");
    scanf("%d", &n2);
    printf("Prime Numbers : ");
    for(i=n1; i<=n2; i++){
            if (i==0 || i==1) {
                continue;
            }
            for(j=2; j<=i/2; j++) {
                if(i%j==0) {
                    flag=1;
                    break;
                }
            }
            if (flag==0) {
                printf(" %d  ", i);
            }
            flag=0;
    }
    return 0;
}


