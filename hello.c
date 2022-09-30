#include<stdio.h>
#include<conio.h>
int main()

    /*
    {
    int a[10],even[10],odd[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    //processing;
    for(i=0;i<10;i++)
    {
        if((a[i]%2)==0)
        {
            even[i]=a[i];
        }
        else if((a[i]%2))
        {
            odd[i]=a[i];
        }

    }

    printf("Even number: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",even[i]);
    }
    printf("Odd NUmbers: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",odd[10]);

    }
    return 0;
    */
    ///::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*
{
    int x[5]={12,45,78,6,41};
    printf("\n %d",x[0]);
    printf("\n %d",x[1]);
    printf("\n %d",x[2]);
    printf("\n %d",x[3]);
    printf("\n %d",x[4]);
    return 0;
}
*/
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*
{
    int x[5]={12,45,78,6,41};
    int i;
    printf("\n Elements from array x: ");
    for(i=0;i<5;i++)
    {
        printf("\n %d",x[i]);
    }
    return 0;

}

*/
///::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

/*{
    int x[5]={12,45,78,6,41};
    int i;
    printf("\n Elements from array x: ");
    for(i=0;i<5;i++)
    {
        printf("    %d",x[i]);
    }
    return 0;
}
*/
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*
{

    int x[5]={12,45,78,6,41};
    int i;
    printf("\n Elements from array x: ");
    for(i=0;i<5;i++)
    {
        printf("%6d",x[i]);
        //printf("%10d",x[i]);//10 spaces left
        // printf("%-10d",x[i]);//10 spaces right
    }
    return 0;

}
*/
///:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//array input

/*{
     /// decl
    int x[5],i;

    /// input
    printf("\n Enter 5 nos: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    ///display
    printf("\n Elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%6d",x[i]);
    }
    return 0;

}
*/
///::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*
 // Program to display the array in reverse manner
{
     /// decl
    int x[5],i;

    /// input
    printf("\n Enter 5 nos: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    ///display
    printf("\n Elements are: ");
    for(i=0;i<5;i++)
    {
        printf("%6d",x[i]);
    }

    printf("\n Display in reverse manner: ");
    for(i=4;i>=0;i--)
    {
        printf("%6d",x[i]);
    }

    printf("\n Elements in reverse manner are: ");
    for(i=0;i<5;i++)
    {
        printf("%6d",x[4-i]);
    }
    return 0;

}
*/
///::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//Writte a program  to copy the elements from one array into another array
/*
{
    /// decl
    int x[7],y[7],i;

    /// x input
    printf("\n Enter the 1st array: ");
    for(i=0;i<7;i++)
    {
        scanf("%d",&x[i]);
    }

    /// x copied to y
    for(i=0;i<7;i++)
    {
       y[i]=x[i];
    }

    /// x display
    printf("\n x Elements are: ");
    for(i=0;i<7;i++)
    {
        printf("%6d",x[i]);
    }
    /// y display
    printf("\n y Elements are: ");
    for(i=0;i<7;i++)
    {
        printf("%6d",y[i]);
    }
    return 0;
}
*/
///::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//Write a program to  Reverse display
/*
{
    /// declaration
    int x[7],y[7],i;

    /// x input from the user
    printf("\n Enter the 1st array: ");
    for(i=0;i<7;i++)
    {
        scanf("%d",&x[i]);
    }

    /// x reverse copied to y
  //  for(i=0,j=6;i<7;i++,j--)
  //  {
  //      y[j]=x[i];            //one method for reversing the array
  //  }

    for(i=0;i<7;i++)
    {
       y[6-i]=x[i];               //another method for reversing the array
    }

    /// x display
    printf("\n x Elements are: ");
    for(i=0;i<7;i++)
    {
        printf("%6d",x[i]);
    }
    /// y display
    printf("\n y Elements are: ");
    for(i=0;i<7;i++)
    {
        printf("%6d",y[i]);
    }
    return 0;

}
*/
///:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
///even count
/*
{

    int ar[10],i,cnt=0;

        printf("\n Enter any 10 nos: ");
        for(i=0;i<10;i++)
        {
            scanf("%d",&ar[i]);
        }
        /// Processing of the array for counting the no of evens.
        for(i=0;i<10;i++)
        {
            if(ar[i]%2==0)
            {
                cnt++;
            }
        }
        printf("\n Entered nos: ");
        for(i=0;i<10;i++)
        {
            printf("%7d",ar[i]);
        }

        printf("\n Even Count: %d",cnt);
        return 0;
}
*/
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//
/*
{

    int ar[10],i,c=0,c1=0;

        printf("\n Enter any 10 nos: ");
        for(i=0;i<10;i++)
        {
            scanf("%d",&ar[i]);
        }
        /// Process
        printf("\n Even no list");
        for(i=0;i<10;i++)
        {
            if(ar[i]%2==0)
            {
                printf("%6d",ar[i]);
                c++;
            }
        }
        printf("  No of Even  %d",c);
        printf("\n Odd no list");
        for(i=0;i<10;i++)
        {
            if(ar[i]%2!=0)
            {
                printf("%6d",ar[i]);
                c1++;
            }
        }
        printf("  No of odd :  %d",c1);
        return 0;
}
*/
///:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
// WAP to input and display the values.
/*
{

    int x;
    char ch;
    float ft;
    double db;

    printf("\n Enter one character,integer and two fractional values: ");
    scanf("%c %d %f %lf",&ch,&x,&ft,&db);

    printf("\n value of x is: %d",x);
    printf("\n ch=%c \t ft=%0.3f \n Val of db is %lf",ch,ft,db);

    return 0;
}

*/
///:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

//
    // When i write the above program as (character is entered at last or in between)

        // Using fflush(stdin) to clear Keyboard buffer
/*
{
    int x;
    char ch;
    float ft;
    double db;

    printf("\n Enter one integer and two fractional values: ");
    scanf("%d %f %lf",&x,&ft,&db);

    printf("\n Enter the character: ");
    fflush(stdin); // Try to run with and without this instruction
    scanf("%c",&ch);

    printf("\n value of x is: %d",x);
    printf("\n ch=%c \t ft=%0.2f \n Val of db is %lf",ch,ft,db);

    return 0;
}
*/
///:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

{


}


































