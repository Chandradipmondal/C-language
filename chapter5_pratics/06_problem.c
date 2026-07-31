#include<stdio.h>
int fibonacci(int);
int fibonacci(int n ){
if( n == 1 ||n == 2){
    return n-1;
}  
else{
    return fibonacci(n-1)+fibonacci(n-2);
}  
}
int main(){
int n;
printf("The value of n is : ");
scanf("%d", &n);
fibonacci(n); 
printf("The value of %d fibanacci series is %d",n,fibonacci(n));
return 0;
}