/*	Write a program which accept string from user and print below pattern.

Input : “PPA”
Output : 
			p
			p	p
			p	p	a	*/

#include<stdio.h>
void Pattern(char *str)
{
	char *Temp=NULL;
	Temp=str;
	int iCnt=0;
	int i=0;
	int iCnt1=0;
	while(*str!='\0')
	{	
		iCnt++;
		str++;
	}	

	for(i=1;i<=iCnt;i++)
	{
		str=Temp;
		iCnt1=1;
		while((*str!='\0')&&(iCnt1<=i))
		{	
			if((*str>='A')&&(*str<='Z'))
			{			
				printf("%c\t",*str+32);
				str++;
				iCnt1++;
			}	
			else
			{
				printf("%c\t",*str);
				str++;
				iCnt1++;
			}
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
