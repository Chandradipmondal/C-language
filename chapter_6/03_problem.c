#include <stdio.h>

// Write a program to change the value of a variable to ten times of its current value
int changing_value(int*);
int changing_value(int* i){
    return *i=*i*30;
}
int main(){
    int i = 10;
    int* j = &i;
    printf("The value of i is %d\n", i);
    changing_value(j);
    printf("The value of changing value is %d", i);
    return 0;
}