/*	Write a program which accept string from user and count number of capital characters.
Input : “Marvellous Multi OS”
Output : 4	*/

#include<stdio.h>

int Count(char Brr[])
{
	char *str=NULL;
	str=Brr;
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	printf("Enter the String");
	scanf("%[^'\n']s",Arr);
	
	iRet=Count(Arr);
	printf("Capital character is: %d",iRet);	
	return 0;
}
