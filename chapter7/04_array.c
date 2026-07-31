#include<stdio.h>

int main(){
    int arry[2][3];
    for(int i = 0; i<2; i++){
        for(int j=0;j<3; j++){
            printf("The value of  arry[i][j]\n",i,j);
            scanf("arry[%d][%d]", i,j);                 
        }
    }
  for(int i = 0; i<2; i++){
        for(int j=0;j<3; j++){
            printf("The value of arry[%d][%d] \n", i,j);
        }
    }  
}