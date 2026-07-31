#include <stdio.h>
// Write a recursive function to calculate the sum of first ‘n’ natural numbers.
int sum(int);
int sum(int n){
if(n==0|| n==1){
        return n;
    }
    return sum(n-1)+n;
}

int main(){
    int a ; 
    printf("The value a is :\n");
    scanf("%d", &a);
    printf("The value of natural sum is %d", sum(a));

    return 0;
}