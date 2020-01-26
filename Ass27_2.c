/*	Write a program which accept string from user and count number of Small characters.
Input : “Marvellous”
Output : 9	*/

#include<stdio.h>

int Count(char Brr[])
{
	char *str=NULL;
	str=Brr;
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	printf("Small character is: %d",iRet);	
	return 0;
}
