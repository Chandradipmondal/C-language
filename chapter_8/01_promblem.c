#include <stdio.h>
int slice(char str[], int m , int n){
int i=0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str[n] = '\0';
str = ptr1;
return ptr1;    
}
int main(){
    char str[] = "harry bhai";
    printf("%s",slice(str, 1,5));
    
    return 0;
}