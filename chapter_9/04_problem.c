#include<stdio.h>
int main(){
    int num, originalnum, remember, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    originalnum = num;
    while(num>0){
        remember = num%10;
        sum  = sum + remember*remember*remember;
        num = num/10;
    }
    if(sum == originalnum)
printf("%d is an armstrong number.\n", num);
else 
printf("%d is  not an armstrong number.\n", num);

return 0;
}