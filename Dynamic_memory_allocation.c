///Dynamic memory allocation //free function use
//find the countof the even and odd using the dynamic array
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{

    int evenCount=0,oddCount=0,i;
    int size;

    printf("Enter the size of the array:");
    scanf("%d",&size);

    int *p=(int*)malloc((sizeof(int)*size));//here is p is an array

    printf("Enter the elements of the array: ");

    for(i=0;i<=size;i++)
    {
        scanf("%d",x+i);
    }

}
