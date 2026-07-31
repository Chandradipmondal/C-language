#include<stdio.h>
#include<math.h>
int main(){
    int num,originalNum, remainder,digit = 0;
     double sum = 0;
    printf("Enter  a number:");
scanf("%d", &num);
originalNum = num;
for(originalNum=num; originalNum !=0;originalNum/=10){
    digit++;
}for(originalNum=num; originalNum !=0;originalNum/=10){
    remainder = originalNum%10;
    sum += pow(remainder,digit);
}
if(sum == num)
printf("%d is an armstrong number.\n", num);
else 
printf("%d is  not an armstrong number.\n", num);

return 0;
}