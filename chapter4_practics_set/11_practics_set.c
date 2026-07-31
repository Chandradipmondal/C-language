#include <stdio.h>

int main(){
    int n ;
    int i=2;

    int not_prime =0;
    printf("The value of n is:\n");
    scanf("%d", &n);
    if(n==1||n==0){
    not_prime = 1;
    }
    else{
        while (i<n)
        {
           if(n%i ==0 && n !=2){
            not_prime=1;
            break;
           }i++; /* code */
        }
        
            
        
    }
    
if(not_prime){
    printf("This number %d is not prime",n);
}else{
    printf("This number %d is prime ", n);
}
    
    return 0;
}