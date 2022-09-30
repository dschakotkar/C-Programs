#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[100],arr1[100],arr2[100],i,j,k,size1,size2,temp,loc,min_index,key,start,mid,end,sum,c=0;
    printf("\tEnter the sizes of the array N1 & N2 : ");                //taking the size of the array
    scanf("%d",&size1);
    printf("\n\tEnter the %d elements in the array: ",size1);
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr[i]);                                  //inpput the no of the elements in the aray
    }
   ///***************************************************************************************************************************************
   /**
    ///Write a program to sort the array of positive and nagative numbers:
    for(i=0;i<size;i++)                                 //algorithm for the sorting the array
    {
        if(arr[i]>0)                                    //comparision of the positive numbers
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[j]<0)                            //camparision of nagative numbers.
                {
                    temp=arr[i];
                    arr[i]=arr[j];                      //exchanging the first value with last value
                    arr[j]=temp;
                }
            }
        }
    }
    printf("\n\nNagative and positive numbers are : ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    */
    ///************************************************************************************************************************
    /**
    ///Write a program to merge two sorted array into new array
    i=0;j=0;k=0;
    while(i<size1&&j<size2)
    {

        if(arr[i]<arr1[j])
        {
            arr2[k++]=arr[i++];
        }
        else
        {
            arr2[k++]=arr1[j++];
        }
    }
    while(i<size1)
    {
        arr2[k++]=arr[i++];
    }
    while(j<size2)
    {
        arr2[k++]=arr1[j++];
    }
    printf("\n\tNew merged and sorted array is : ");
    for(k=0;k<(size1+size2);k++)
    {
        printf("%6d",arr2[k]);
    }

    */
    ///****************************************************************************************************************************
    ///bubble sorting using the array concept:
   /**
    for(i=0;i<size1;i++)                                       ///loop created for the steps
    {
        for(j=0;j<size1-i;j++);                                ///looop created for the cmparisioon of the condition i.e end to start arrg
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];                                //caomparision of end to start
                arr[j+1]=temp;
            }
        }
    }
    //sorted array
    printf("\n\tSorted array is : ");
    for(j=0;j<size1;j++)
    {
        printf("%8d",arr[j]);                       //printing the bubble sorted array

    }
    */
    ///****************************************************************************************************************************************
   /**
    ///Write a program to implement the selection sort:
    for(i=0;i<size1;i++)                    //for the steps in the loop
    {
        min_index=i;
        for(j=i+1;j<size1;j++)             //created for the comparision small element
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_index];             //small element takes first and so on.
        arr[min_index]=temp;
    }
    printf("\n\tSort Using the selection sort: ");
    for(i=0;i<size1;i++)
    {
        printf("%8d",arr[i]);
    }
    */
    ///************************************************************************************************
    /**
    ///Searching the keys in given array using the linear sort: (Unsorted array)
    printf("\n\tEnter the key to serach in above array that you entered: ");
    scanf("%d",&key);
    loc=-1;
    for(i=0;i<size1;i++)
    {
        if(arr[i]==key)
        {
            loc=i;
            break;
        }
    }
    if(loc==i)
    {
        printf("\n\t%d is found in the array:",key);
    }
    else
    {
        printf("\n\t%d is not found in the array:",key);
    }
    */
    ///*************************************************************************************************
    /**
    ///Write a program to search the key in the given array by using the binary search (divide and concquer method) sorted array
    ///Binary Searching
    printf("\n\tEnter the key to serach in above array that you entered: ");
    scanf("%d",&key);
    start=0;end=size1-1;loc=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            loc=mid;
            break;
        }
        else if(arr[mid]>key)
        {
            //start=mid+1;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    if(loc==-1)
    {
        printf("\n\t%d is not found in the given array:",key);
    }
    else
    {
        printf("\n\t%d is found in the given array: at location %d",key,loc);
    }
    */
    ///******************************************************************************************
    ///Program to to enter the array of -ve and +ve number & find the series of elements having sum is zero;

    for(i=0;i<size1;i++)
    {
        sum=arr[i];
        for(j=i+1;j<size1;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                for(k=i;k<=j;k++)
                {
                    printf("%5d ",arr[k]);

                }
                break;
            }
        }
    }

///**************************************************************************************
///
























///***************************************************************************************************
    ///Write a program to find the intersection of two arrays (common elements in both arrays)
/**
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(arr[i]==arr1[j])
            {
                arr2[j]=arr[i];
                c++;
            }
        }
    }
    printf("\n\tIntersection of two arrays are :");
    for(j=0;j<c;j++)
    {
        printf("%5d",arr2[j]);
    }
*/








    return 0;
}
