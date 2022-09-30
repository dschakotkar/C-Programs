#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0;
    char s[100];
    printf("Enter the sting: ");
    gets(s);

    for(i=0;i<=strlen(s);i++)
    {
        for(j=0;j<=strlen(s);j++)
        {
            c=0;
            if(s[i]==s[j])
            {
                c++;
            }
        }
        printf("\n%c present %d times \n",s[i],c);
    }
    return 0;
}
