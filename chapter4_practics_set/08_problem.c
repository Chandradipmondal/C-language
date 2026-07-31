#include <stdio.h>

int main(){
    int n,product = 1;
    printf("The value of n is\n");
      scanf("%d",&n);
    for (int i=1; i <=n; i++){
        product *= i;
    }
    printf("The factorial is %d\n", product);
    return 0;
}