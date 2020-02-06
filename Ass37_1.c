/*	Write a program which accept string from user count number of words from string

Input : “Marvellous Multi OS”
Output : 3
Input : “Marvellous Multi OS Pune”
Output : 4	*/

#include<stdio.h>

int WordCount(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		iCnt++;
		while((*str!=' ')&&(*str!='\0'))
		{
			str++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[50] = "Marvellous Multi OS Pune";
	int iRet=0;
	
	iRet=WordCount(arr);

	printf("The total words is %d",iRet);
	return 0;
}	
