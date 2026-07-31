#include <stdio.h>
// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
int returning_fn(int*);
int returning_fn(int* J){
  printf("The value of adress is %u\n",*J);
  return 1;
}
int main (){
 int i =23;
 int* J= &i;
 printf("The address value of i is %u\n", J);
 
returning_fn(J);

  return 0;
}
