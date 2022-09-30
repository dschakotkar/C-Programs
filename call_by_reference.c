/// function call by reference
#include<stdio.h>
int show(int *p)
{
    *p=100;
    return *p;
}
int main()
{
    int n=200;
    printf("Number is locally declared before runing to function call: %d\n",n);   ///200
    show(&n);
    printf("number is %d",n);                                                      ///100
}
///address are copied into the parameteres
