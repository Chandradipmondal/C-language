#include <stdio.h>

int main(){
    int n, i=1;
    printf("The value of n is:\n");
    scanf("%d", &n);
    for(int i = 1; i<=10; i++){
        printf("The multipliation table is :%d\n", i*n);
    }
    return 0;
}