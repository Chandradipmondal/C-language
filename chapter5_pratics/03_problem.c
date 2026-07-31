//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2. 
#include <stdio.h>
float force(float,float);
float force(float m,float a){
    return m*a;
}

int main(){
    float m ;
    printf("The value of m is :\n");
    scanf("%f", &m);
    float g = 9.8;
    printf("The value of force is %.2f", force(m,g));
    return 0;
}