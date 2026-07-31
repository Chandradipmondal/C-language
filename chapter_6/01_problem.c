#include <stdio.h>
// Write a program to print the address of a variable. Use this address to get the value of the variable.
int main(){
    int i = 43;
     int* j = &i;
     printf("The adress of i is %p\n", j);
     printf("The value of i is %d", *j);
    
    return 0;
}