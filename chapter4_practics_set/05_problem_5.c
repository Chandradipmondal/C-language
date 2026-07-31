#include <stdio.h>

int main(){
    int n,i=0;
    int sum = 0;
    printf("The value of n is:\n");
    scanf("%d", &n);
    while(i<=10){
        sum +=i;
        i++;
    }
    printf("The value of 10 natural numberis %d", sum);
    return 0;
}