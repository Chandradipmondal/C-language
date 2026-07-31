#include <stdio.h>
// Write a function and pass the value by reference
void pass_value(int*);
void pass_value(int* i){
   
    *i = 3;
}
int main(){
    int i =23;
    int* j =&i;
    printf("The value of this function is %d\n", i);
    pass_value(&i);
    printf("The value of pass value is %d\n", i);
    return 0;
}