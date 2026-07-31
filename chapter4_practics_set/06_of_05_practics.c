#include <stdio.h>

int main(){
    int n,i=0;
    int sum = 0;
    printf("The value of n is:\n");
    scanf("%d", &n);
    while(i<=n){
        printf("The total sum:%d\n",i);
        sum +=i;
        i++;
    }
    printf("The value of natural numberis %d", sum);

return 0;
}

