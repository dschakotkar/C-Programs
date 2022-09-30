#include<stdio.h>
#include<string.h>
int fact(int a)
{
	int i;
    for( i=a-1;i>=1;i--)
    {
        a*=i;
    }
    return a;
}
int strong(int a)
{
    int sum=0,t=a;
    while(a!=0)
        sum+=fact(a%10);
        a/=10;
    return sum==t;///output 1 or 0
}
int prime(int a)
{
	int i;
    for(i=2;i<a/2;i++)
        if(a%i==0)
            return 0;
    return 1;
}
int perfect(int a)
{
    int i,sum=0;
    for(i=1;i<=a/2;i++)
        if(a%i==0)
            sum+=i;
    return sum==a;
}
int main()
{
     int x=4;
     printf("%d is the factorial of %d\ ",fact(x),x);


    return 0;


}

