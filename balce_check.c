///sample["D:200","D:200","W:200","D:100"]         300
///sample["D:100","D:100","W:200","D:300"]         300

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int calculate(char **t,int n)
{
    int bal=0,i,j;
    char s[100];

    for(i=0;i<n;i++)
    {
    	for(j=2; t[i][j] != '\0' ;j++)
        {
            s[j-2] = t[i][j];
        }
    	s[j-2] = '\0';


        if(t[i][0]=='D')
        {
            bal+=atoi(s);
        }
        else
        {

            bal-=atoi(s);
        }
    }
    return bal;

}
int main()
{
    char *s[10]={"D:200","D:200","W:200","D:100"};
    printf("Balance = %d",calculate(s,4));
    return 0;

}
