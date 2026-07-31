#include <stdio.h>

int main(){
    int marks;
    printf("Marks obtain:\n");
    scanf("%d", &marks );

    if(marks <= 100 && marks >=90){
        printf("A");
    }
    else if(marks < 90 && marks >=70){
        printf("B");
    }
    else if(marks < 70 && marks >=50){
        printf("c");
    }
    else if(marks < 50 && marks >=30){
        printf("D");
    }
    else {
        printf("Failed");
    
    }

    return 0;
}