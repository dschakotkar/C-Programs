#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k;
	char s[100];
	char t;
	puts("Enter the String :");
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		j=i;
		while(s[j]!=' ' && s[j]!="\0")
		{
			j++;
			k=j+1;
			j--;
		}
		while(i<=j)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;		
		}
		i=k;
	}
	printf("String is %s ",s);
	
	
}
