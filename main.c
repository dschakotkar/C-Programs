#include<stdio.h>
#include<conio.h>

//int main()
//{

/*
    float amt=0,a,b,c;
    printf("Enter the Amount: ");
    scanf("%f",&amt);


    b=(amt*2)/7;

    printf("A : %f",b/2);
    printf("\nB is %f",b);
    printf("\nC is %f",2*b);
    return 0;
//-------------------------------------------------------------
    int a,i,j;
    printf("Enter the number :");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        a=a%10;

        a=a/10;


    }
*/
//------------------------------------------------------------
  /*
    int SUM=0,n;
    char c;
    do
    {

        printf("Enter the NUmber: ");
        scanf("%d",&n);
        SUM+=n;
        printf("Press Y to continue\n");

    }
    while((c=getch())=="Y");
    printf("Sum  is : %d",SUM);
*/
/*
//------------------------------------------------------------------
    //count repetative number
    int i,count,t,n,d;
    printf("Enter the Any Number: ");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {

        count=0;
        t=n;
        while(t!=0)
        {

            d=t%10;
            if(d==i)
            {

                count++;

            }
            t=t/10;
        }
        if(count!=0)
            printf("\n%d=%d",i,count);
    }
    return 0;
  */
   //---------------------------------------------------------------------------
   /*
   //prime or not
   int i,n;
   printf("Enter the number :");
   scanf("%d",&n);
   for(i=2;i<n/2;i++)
   {
       if(n%i==0)
       {

           printf("%d is not Prime number.",n);
           break;
       }

   }
   if(i==n/2)
        printf("%d is prime",n);
 */
//-------------------------------------------------------------------------------
/*
//Table of any number using the while loop
   int n1,n2,n3,i=1;
   printf("Enter the Any three Number : ");
   scanf("%d %d %d",&n1,&n2,&n3);
                       //using while loop
   while(i<=10)
   {

       printf("%d * %d : %d\n",n1,i,n1*i);
       i++;
   }
   printf("\n--------------------------------------------------------------------\n");

//Table of any number using the for loop
    for(i=1;i<=10;i++)
    {
        printf("%d * %d : %d\n",n2,i,n2*i);
    }
    printf("\n--------------------------------------------------------------------\n");
 //Table of any number using the do while loop
    i=1;
    do
    {
        printf("%d * %d : %d\n",n3,i,n3*i);
        i++;

    }
    while(i<=10);
    return 0;
*/
//----------------------------------------------------------------------------------------------------------------
/*
//Fibbonacci series using the for loops
    int a=0,b=1,i,n,c;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("0\n1\n");
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
//Fibbonacci series using the while loops--------------------------------------------------------------------------
    printf("\n-------------------------\n");
    i=0;
    b=1;
    a=0;
    c=0;
    printf("0\n1\n");
    while(i<n-2)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
    }
//Fibbonacci series using the do- while loops--------------------------------------------------------------------------
    printf("\n-------------------------\n");
     i=0;
    b=1;
    a=0;
    c=0;
    printf("0\n1\n");
    do
    {
         c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
    }
     while(i<n-2);
*/
//-------------------------------------------------------------------------------------------------------------
  /*
    //factorial number using the for loop
    int i,n,a;;

    printf("Enter the number :");
    scanf("%d",&n);
    a=n;
    for(i=n-1;i>1;i--)
    {

        n=n*i;
    }
    printf("%d is the factorial of given number %d",n,a);

    //factorial number using the while loop----------------------------------------------
    printf("\nEnter the any number : ");
    scanf("%d",&n);
    a=n;
    i=n-1;
    while(i>1)
    {
        n=n*i;
    i--;
    }
    printf("\n%d is the factorial of given number %d",n,a);

    //factorial number using the while loop----------------------------------------------
    printf("\nEnter the number : ");
    scanf("%d",&n);
    a=n;
    i=n-1;
    do
    {
        n=n*i;
        i--;

    }
    while(i>1);
    printf("\n%d is the factorial of given number %d",n,a);

*/
//--------------------------------------------------------------------------------------------------------------------
/*
// LCM Using the for loop---------------------------------
    int n1,n2,max;
    printf("Enter the Any two number to find the LCM : ");
    scanf("%d %d",&n1,&n2);

    max=n1>n2 ? n1:n2;

    for( ; ; )
    {
        if(max%n1==0 && max%n2==0)
        {

            break;
        }
        max++;
    }
    printf("LCM = %d",max);


// LCM Using the while loop---------------------------------
    int n3,n4;
    printf("\nEnter the Any two number to find the LCM : ");
    scanf("%d %d",&n3,&n4);
    int max1=n3>n4 ? n3:n4;
    while(1)
    {
        if(max1%n3==0&&max1%n4==0)
        {
            break;
        }
        max1++;

    }
    printf("LCM : %d",max1);

// LCM Using the do-while loop---------------------------------
    int num1,num2,maximum;
    printf("\nEnter the Two number to find out the prime number using the do while loop : ");
    scanf("%d %d",&num1,&num2);
    maximum=num1>num2?num1:num2;
    do
    {
        if(maximum%num1==0&&maximum%num2==0)
        {
            break;
        }
        maximum++;
    }
    while(1);
    printf("\nLCM : %d",maximum );

//pattern printing using the loops============================================================================
int i,j;
printf("\n\n");
for(i=1;i<5;i++)
{
    for(j=1;j<5;j++)
    {                                                  // *   *   *   *
                                                      //  *   *   *   *
        printf("\t*\t");                              //  *   *   *   *
    }                                                   //*   *   *   *
    printf("\n");


}
return 0;

//pattern printing using the loops============================================================================

*/
// crating arry usiing the for loop----------------------------------------------------------------------------
/**
int x[10],i;
printf("\nEnter the Elements for store in array: ");
for(i=0;i<10;i++)
{
    scanf("%d",&x[i]);
}
printf("\nEntered numbers are in same mannar: ");
for(i=0;i<10;i++)
{

    printf("\t%d",x[i]);
}
printf("\nEntered numberes are in the revese format:");
for(i=0;i<10;i++)
{

    printf("\t%d",x[9-i]);
}
*/
//----------------------------------------------------------------------------------------
/// taking the spaecific number of Elments form the user:
/**
int a[10],i,x=0;
printf("Enter the Specific NO.of elements: ");
scanf("%d",&x);
printf("Enter the %d  no of elements: ",x);
for(i=0;i<x;i++)
{
    scanf("%d",&a[i]);
}
printf("Given small array is: ");
for(i=0;i<x;i++)
{
    printf("\t%d",a[i]);
}
*/
//--------------------------------------------------------------------------------------
/*
///fINDING THE ODD AND EVEN NUMBERS FROM ENTERD NUMBERS:
    int x[10],d,even[10],odd[10],i;
    printf("How musch Element have to enter by user: ");
    scanf("%d",&d);
    printf("\n Enter the %d elements: ",d);
    for(i=0;i<d;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<d;i++)
    {

        if(x[i]%2==0)
        {
            even[i]=x[i];

        }
        else
        {
            odd[i]=x[i];

        }
    }
    printf("Even values are : ");
    for(i=0;i<d;i++)
    {

        printf("\t%d",even[i]);
    }
*/
/*
///coppy the given array inrto anotrher array :
int a[10],b[10],i;
printf("Enter the 10 elements : ");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
    b[i]=a[i];
}
printf("Given copied array is : ");
for(i=0;i<10;i++)
{
    printf("%6d",b[i]);

}
*/
/// Erite as program to display the list of odd and even numbers enterd by the user;
/*
int a[10],i,even[10],odd[10];
printf("Enter the NUmbers: ");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
//processing the odd and even operation
for(i=0;i<10;i++)
{
    if(a[i]%2==0)
    {
        even[i]=a[i];
    }
    else{
        odd[i]=a[i];
    }
}
    printf("\nEven list : ");
    for(i=0;i<10;i++)
    {
        printf("  %d",even[i]);
    }
    printf("\nOdd list : ");
    for(i=0;i<10;i++)
    {
        printf("  %d",odd[i]);
    }













return 0;














}
*/
