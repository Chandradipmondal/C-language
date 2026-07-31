#include <stdio.h>
// Write a function to convert Celsius temperature into Fahrenheit.

float Fahrenheit_scale(float, int);
float Fahrenheit_scale(float a, int b){
    printf("The value of the fahrenheit scale is %f",a + b);
    return a+b;
}
int main(){
    float c;
printf("The value of celsius is :\n");
scanf("%f", &c);
float a =(9/5)*c;
int b = 32;
Fahrenheit_scale(a,b);
    return 0;
}