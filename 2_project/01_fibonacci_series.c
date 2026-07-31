#include <stdio.h>
int fibonacci (int);
int fibonacci(int n){
    if(n ==1|| n==2){
        return n-1;
    }
return fibonacci(n-1)+fibonacci(n-2);    
}
int main(){
    int a;
    printf("The value of a is:\n");
    scanf("%d", &a);
    fibonacci(a);
    printf("The value of fibonacci series is %d ",fibonacci(a-1)+fibonacci(a-2));
    
    return 0;
}