/*	Write a recursive program which accept string from user and count number of small characters.

Input : HElloWOrlD
Output : 5		*/

#include<stdio.h>
int Small(char *str)
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
		iCnt=Small(str);
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter the String");
	scanf("%s",Arr);
	
	iRet=Small(Arr);
	printf("The Small character count is %d",iRet);
	
	return 0;
}
