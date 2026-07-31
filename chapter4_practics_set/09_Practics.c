#include <stdio.h>

int main(){
    int i =1, product = 1;
    int n;
    printf("The value of n is:\n");
    scanf("%d", &n);
    while(i<=n){
        product *=i;
        i++;

    }  
  printf("The factorial is %d", product);

    return 0;
}