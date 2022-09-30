#include<stdio.h>
int arr(int a[],int n)  ///array and size of the artray is passed
{
/*
    int flag=0;
    for(int i=0;i<4&&i<n;i++)
    {
        if(9==a[i])
        {
           flag=1;
        }                                             //allternatrive logic fopr this porgrams
        else{
            flag=0;
        }
    }
    return flag;
 */
    int i=0,flag=0;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<4&&j<n;j++)
        {
            if(a[j]==9)
            {
                flag=1;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int a[10]={1,44,3,4,6,9};
    //for(int i=0;i<10;i++)
    //    printf("%4d",a[i]);
    printf("%d",arr(a,10));
    return 0;
}
