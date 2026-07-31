#include <stdio.h>
// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
int sum (int , int);
int sum (int a, int b){
    return a+b;
}
float average (int,int);
float average (int a, int b){
    return (a+b)/2.0;
}
int main(){
    int a =12;
    int b =23;
    sum(a,b);
    printf("The value of sum is %d\n",sum(a,b));
    average(a,b);
    printf("The value of average is %0.2f\n", average(a,b));
    return 0;
}