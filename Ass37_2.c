/*	Write a program which accept string from user and return length of largest word.

Input : “Marvellous Multi OS Infosystems”
Output : 11	*/

#include<stdio.h>

int WordCount(char *str)
{
	int iCnt=0;
	int Max=0;
	while(*str!='\0')
	{
		while((*str!=' ')&&(*str!='\0'))
		{
			iCnt++;
			str++;
		}
		str++;
		if(iCnt>Max)
		{
			Max=iCnt;
		}
		iCnt=0;
	}
	return Max;
}

int main()
{
	char arr[50] = "Marvellous Multi OS Infosystems";
	int iRet=0;
	
	iRet=WordCount(arr);

	printf("The length of largest word is %d",iRet);
	return 0;
}	
