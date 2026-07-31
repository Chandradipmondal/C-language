#include <stdio.h>

void printarray (int arr[], int n ){
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    printf(" \n");
}
int main(){
    int arr[] = {1,2,3,4,5};
    printarray(arr,5);
    printarray(arr,5);
    return 0;
}