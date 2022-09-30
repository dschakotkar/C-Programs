#include<stdio.h>
#include<string.h>
///finding the factorial of number
int fact(int a)
{
	int i;
    for( i=a-1;i>=1;i--)
    {
        a*=i;
    }
    return a;
}
///finding the strong number
int strong(int a)
{
    int sum=0,t=a;
    while(a!=0)
    {
        sum+=fact(a%10);
        a/=10;
    }
    return sum==t;///output 1 or 0
}
///finding the prime number
int prime(int a)
{
	int i;
    for(i=2;i<a/2;i++)
        if(a%i==0)
            return 0;
    return 1;
}
///finding the perfect number
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
     int opt;

     while(1)
     {
         printf("\n\t1.Prime\n\t2.Strong.\n\t3.Perfect\n\t4.factorial\n\t5.Exit");
         scanf("%d",&opt);
         if(opt==5)
        {
            exit(0);
        }
        else
        {
             int n;
             printf("\nEnter the Number : ");
             scanf("%d",&n);
             switch(opt)
             {
                case 1:
                    if(prime(n))
                        printf("\n%5d is prime number.",n);
                    else
                        printf("\n%d is not prime number.",n);
                    break;
                case 2:
                    if(strong(n))
                        printf("\n%d is stong number.",n);
                    else
                        printf("\n%d is not strong number.",n);
                    break;
                case 3:
                    if(perfect(n))
                        printf("\n%d is perfect number.",n);
                    else
                        printf("\n%d is not perfect number.",n);
                    break;
                case 4:
                    printf("\nFactorial of %d is %d",n,fact(n));
                    break;

            }
         }
    }


    return 0;
}
