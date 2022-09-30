#include<stdio.h>
#include<stdlib.h>
void seed(int a, int b)
{
    int i=0,c=0;
    int A[10];
    for(i=0;i<=a/2;i++)
    {
        c++;
        A[i]++=a
    }
    for(i=c;i>=1;i--)
    {
        a*=A[i];
    }
}

int main()
{
    int A=123,B=738;
    seed(A,B);
    return 0;
}
