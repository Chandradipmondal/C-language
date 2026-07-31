#include <stdio.h>
#include<math.h>
float average(int, int,int);
float average(int a, int b, int c){
 printf("The value of average is %d", (a + b + c)/3);
 return (a + b + c)/3; 
}
int main(){
    int a =21;
    int b=32;
    int c =34;
    average(a,b,c);
    
    return 0;
}