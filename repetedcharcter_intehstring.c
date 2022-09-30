///3A5B1C
///repeted charcter inthe string
#include <stdio.h>
#include <string.h>
int repetedcharacter(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        int count=1;
        while(str[i]==str[i+1]&&i<strlen(str)-1)
        {

            count++;
            i++;
        }
        printf("%d%c",count,str[i]);
    }

}
int main()
{
    char str[100]="AAAABBBCC";
    repetedcharacter(str);
    return 0;

}
