/*#include <stdio.h>

int main(){
    //Write a program to check whether a given number is prime or not using loops.
    int i;
    printf("The value of i is:\n");
    scanf("%d", &i);
    if(i%1==0 && i%i==0 &&i%3 !=0 && i%2 !=0){
        printf("The given number is prime %d\n",i);
    }
    else{
        printf("The given number is not prime number %d",i);
    }
    return 0;
}*/
#include <stdio.h>

int main()
{
    int n;
    int it_is_not_prime = 0;
    printf("The value of n is :\n");
    scanf("%d", &n);    
     if (n == 1||n == 0){
    
        it_is_not_prime = 1;
    } 
    else{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 2)
        {
            it_is_not_prime = 1;
            break;
        }
    }}
    if (it_is_not_prime)
    {
        printf("This is  not prime number %d", n);
    }
    else
    {
        printf("This is prime %d", n);
    }

    return 0;
}