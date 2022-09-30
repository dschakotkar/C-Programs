/**
sample                    output
1 1 2 3 1                  True
1 1 2 4 3                 False
*/
#include<stdio.h>

int check(int *arr, int size)
{
    int i,j,flag=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(arr[i]==arr[j])
                flag=1;
            else
                flag=0;
        }
    }
    printf("%d",flag);
}
int main()
{

    int ar[5]={1,2,3,4,5};
    check(ar,5);
    return 0;

}
