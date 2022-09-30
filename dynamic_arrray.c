///Using a single pointer and a 1D array with pointer arithmetic:
///A simple way is to allocate a memory block of size r*c and access its elements using simple pointer arithmetic.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
     int r = 3, c = 4;
    int* ptr = malloc((r * c) * sizeof(int));
    for (int i = 0; i < r * c; i++)                 /* Putting 1 to 12 in the 1D array in a sequence */
        ptr[i] = i + 1;
    for (int i = 0; i < r; i++)                     /* Accessing the array values as if it was a 2D array */
    {
        for (int j = 0; j < c; j++)
            printf("%d ", ptr[i * c + j]);
        printf("\n");
    }
    free(ptr);


    for(int k=0;k<=(r*c);k++)
    {
        for(int m=1;m<c;m++)
        {
            printf("%6d",m);
        }
        printf("\n");
    }


    return 0;
}
/**output..
1 2 3 4
5 6 7 8
9 10 11 12
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
     1     2     3
*/
