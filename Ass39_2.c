/*	Write a program which accept two strings from user and display count of Capital characters from both the strings. 

Input :	“MarvelloUS”
			“InfoSystEMs”
Output :	3	4	*/

#include<stdio.h>

void stren(char *str1,char *str2)
{
	int iCnt1=0,iCnt2=0;
	
	while(*str1!='\0')
	{
		if((*str1>='A')&&(*str1<='Z'))
		{
			iCnt1++;
		}
		str1++;
	}
		
	while(*str2!='\0')
	{
		if((*str2>='A')&&(*str2<='Z'))
		{
			iCnt2++;
		}
		str2++;	
	}
	printf("%d\t%d",iCnt1,iCnt2);
}

int main()
{
	char arr[50]="MarvelloUS";
	char brr[50]="InfoSystEMs";
		
	stren(arr,brr);
	
	return 0;
}
