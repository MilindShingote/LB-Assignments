/*	Write a program which accept string from user and print below pattern.

Input : “PPA”
Output : 
			P P A
			P P A
			P P A		*/

#include<stdio.h>

void Pattern(char *str)
{
	char *Temp=NULL;
	Temp=str;
	int iCnt=0;
	int i=0;
	while(*str!='\0')
	{	
		iCnt++;
		str++;
	}
	for(i=1;i<=iCnt;i++)
	{
		str=Temp;
		while(*str!='\0')
		{	
			printf("%c\t",*str);
			str++;
		}
		printf("\n");
	}
}

int main()
{
	char arr[50] = "PPA";
	
	Pattern(arr);

	return 0;
}	
