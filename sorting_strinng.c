#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
    int i,j;
    char s[SIZE],t;
    puts("Enter the Strings : ");
    for(i=0;i<SIZE;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<SIZE;i++)
    {
        strcpy(t,s[i]);
        strrev(t);
        if(strcmp(s[i],t)==0)
        {
            print("%c is palindrone string ",s);
        }
        else{
            printf("String is not palindrone");
        }

    }
	return 0;
}

