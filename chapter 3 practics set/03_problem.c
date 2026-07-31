#include <stdio.h>

int main(){
    int income,Tax;
    printf("Yearly income:\n");
    scanf("%d", &income);
    if(income <=250000){
       Tax=0;
    }
    else if(income >250000 && income <=500000){
      Tax =  (income - 250000)*0.05;
    }
    else if(income >500000 && income <=1000000){
    Tax = (500000 - 250000)*0.05 + (income - 500000)*0.2;
    }
    else {
      Tax = (500000 - 250000)*0.05 + (1000000 - 500000)*0.2 + (income - 1000000)*0.3 ;
    }
    printf("%d", Tax);
    return 0;
}