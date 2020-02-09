/*	Write a recursive program which accept string from user and count number of characters.

Input : Hello
Output : 5		*/

#include<stdio.h>

int Strlen(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		iCnt++;
		str++;
		iCnt=Strlen(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	printf("Enter the String");
	scanf("%s",Arr);

	iRet=Strlen(Arr);
	printf("Length is %d",iRet);
	return 0;
}
