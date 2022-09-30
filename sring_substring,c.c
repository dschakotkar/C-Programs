#include<stdio.h>
#include<string.h>

int checkforrepeat ( char *str , int i , int j)
{

    for ( int k = i ; k<=j ; k++)
    {
        for(int k1 = k+1 ; k1<=j ;k1++)
        {
            if(str[k]==str[k1])
            {
                return 0;
            }
        }
    }
    return 1;
}
int substring(char *str)
{
    int i,j,k,l,max=0,star=0,end=0;
    char str2[100];
    printf("\nGiven string is :%s",str);
    for(i=0;i<=strlen(str);i++)
    {
        for(j=i;str[j]!='\0';j++)
        {
            if ( checkforrepeat(str,i,j))
            {
                if(max<j-i+1)
                {
                    max=j-i+1;
                    start=i;
                    end=j;
                }
            }
        }
    }
    for(k=start;k<=end;k++)
    {
        str2[x++]=str[k]'
        str[x]='\0';
        puts(str);
}
int main()
{

    char str[100];
    printf("Enter the String :");
    gets(str);                           ///input string: ABDEFGABEF          longest substring : BDEFGA-6 , “DEFGAB”-6, “BBBB”-4,“B”-1

    substring(str);
    return 0;
}
