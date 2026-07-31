//factorial
#include<stdio.h>
int factorial(int);
int factorial(int n){
    if(n==0|| n==1)
    return 1;
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    printf("The value of  is:\n");
    scanf("%d",&n);
    factorial(n);
    printf("The value of factorial(%d) is %d", n,factorial(n));
}