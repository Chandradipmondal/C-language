#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    char op;
    printf("Enter the first value:\n");
    scanf("%f", &a);
    printf("Enter the second value:\n");
    scanf("%f", &b);
    switch (1)
    {
    case '+':
        if(a+b)
        printf("%f", a+b);
        break;
    case '*':
    if(a*b)
    printf("%f", a*b);
    break;
    case '/':
    if(a/b)
    {
        if(b==0)
        printf("UNDEFINE");
        else
        printf("%f", a/b);
    }
        break;
    case '-':
    if(a-b)
    printf("%f", a-b);
    break;
    }

    return 0;
}