///swapping using the function and pointers
#include<stdio.h>
int swap(int *x, int *y)
{
    int t = *x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("before swapping : a = %d\t b = %d\n",a,b);   ///100 200

    swap(&a,&b);
    printf("after swapping : a= %d \t b = %d",a,b);     ///200  100
    return 0;
}
