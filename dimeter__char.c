///ddimeter characters.
#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
	int i,k,j;
	char w[SIZE][100];
	char s[100],d;
	put("Enter the string : ");
	gets(s);
	puts("Enter the Dimeter :" );
	scanf("%c",&d);

	for(i=0,j=0;s[i]!='\0';i++,j++)
	{
		k=0;
		while(s[i]!=d)
		{
			w[j][k++]=s[i++];

		}
		w[j][k]='\0';
	}
	return 0;



}
