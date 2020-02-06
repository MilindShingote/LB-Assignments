/*	Write a program which accept string from user and accept one character. Return index of last occurrence of that character.

Input :	“Marvellous Multi OS”
			M
Output : 11

Input : “Marvellous Multi OS”
			W
Output : -1

Input : “Marvellous Multi OS”
			e
Output :	4	*/

#include<stdio.h>


int LastChar(char *str, char ch)
{
	int iCnt1=-1,iCnt2=-1;
	
	while(*str!='\0')
	{
		iCnt1++;
		if(*str==ch)
		{
			iCnt2=iCnt1;
		}
		str++;
	}
	if(iCnt2==-1)
	{
		return -1;
	}
	else
	{
		return iCnt2;
	}
}
int main()
{
	char arr[20];
	char cValue='\0';
	int iRet = 0;

	printf("Enter string");
	scanf("%[^'\n']s",arr);

	printf("Enter the character");
	scanf(" %c",&cValue);

	iRet = LastChar(arr,cValue);
	if(iRet==-1)	
	{
		printf("Character not found");
	}
	else
	{
		printf("Character location is %d",iRet);
	}
	return 0;
}
