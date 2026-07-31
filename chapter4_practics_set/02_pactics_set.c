#include <stdio.h>

int main(){
     int n, i=10;
    printf("The value of n is:\n");
    scanf("%d", &n);
    for(int i = 10; i; i--){
        printf("The multipliation table is :%d\n", i*n);
    }
    return 0;
}