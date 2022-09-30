//usage of array stringstream
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[4],i,sum=0;
    printf("Enter the 4 numbers: ");
    for(i=0;i<4;i++)
    {
        scanf("%d",x+i);
    }
    for(i=0;i<4;i++)
    {
        sum+=*(x+i);
    }
    printf("addition is :%3d ",sum);
}

/// Enter the 4 numbers: 1 2 3  4
/// Additiion is : 10
