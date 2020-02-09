/*	Write a recursive program which accept string from user and count white spaces.
Input : HE llo WOr lD
Output : 3		*/

#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
		iCnt=WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char Arr[50];
	int iRet=0;
	printf("Enter the String");
	scanf("%[^'\n']s",Arr);

	iRet=WhiteSpace(Arr);
	printf("White Spaces count is %d",iRet);
	return 0;
}
