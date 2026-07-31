#include <stdio.h>

int main(){
    int n,i=0;
    printf("The value of n is :\n");
    scanf("%d", &n);
    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i<n);

    return 0;
}