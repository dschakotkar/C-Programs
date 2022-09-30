///function call by value
#include<stdio.h>
int show(int n)
{
    n=100;
    return n;
}
int main()
{
    int n=200;
    show(n);
    printf("%d is the number local integer\n",n);             ///200
    printf("%d is declared in the show function ",show(n));   ///100
    return 0;
}
///arguments values are copied into the parameters
