/*	Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
Input : “MarvellouS”
Output : 6	(8-2)	*/

#include<stdio.h>

int Count(char Brr[])
{
	char *str=NULL;
	str=Brr;
	int Cap=0,Small=0;
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			Small++;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			Cap++;
		}
		str++;
	}
	return Small-Cap;
}

int main()
{
	char Arr[20];
	int iRet=0;
	printf("Enter the String");
	scanf("%[^'\n']s",Arr);
	
	iRet=Count(Arr);
	printf("Small character is: %d",iRet);	
	return 0;
}
