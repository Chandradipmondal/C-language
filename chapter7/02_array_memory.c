#include <stdio.h>

int main(){
    int number[23];
    int* ptr = &number[0];
    int n =23;
for(int i = 0; i<n;  i++){
    printf("The address value of number is %d\n", ptr);
    ptr++; 
}
    return 0;
}