/*	Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
Input :	“Marvellous Multi OS”
			M
Output :	0

Input :	“Marvellous Multi OS”
			W
Output : -1

Input : “Marvellous Multi OS”
			e
Output :	4	*/

#include<stdio.h>


int FirstChar(char *str, char ch)
{
	int iCnt=-1;
	
	while(*str!='\0')
	{
		iCnt++;
		if(*str==ch)
		{
			break;
		}
		str++;
	}
	if(*str!='\0')
	{
		return iCnt;
	}
	else
	{
		return -1;
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

	iRet = FirstChar(arr,cValue);
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
