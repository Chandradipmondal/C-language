#include <stdio.h>

int main(){
 int  mark1, mark2, mark3;
 printf("The mark oftain in subject1 :\n");
 scanf("%d", &mark1);   
 printf("The mark oftain in subject2 :\n");
 scanf("%d", &mark2);   
 printf("The mark oftain in subject3 :\n");
 scanf("%d", &mark3);   
 if(mark1 <=33 || mark2 <=33 || mark3 <=33){
     printf("FAILED");
    }
    else if( (mark1 + mark2 + mark3)/3 <=40){
        printf("FAILED");
    }
    else{
        printf("PASSED");
    }
 return 0;
}

