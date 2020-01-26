/*	Write a program which accept string from user and check whether it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
	int Cap=0,Small=0;
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
		{
			break;
		}
		str++;
	}
	
	if(*str!='\0')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char Arr[20];
	BOOL bRet=0;
	printf("Enter the String");
	scanf("%[^'\n']s",Arr);
	
	bRet=ChkVowel(Arr);
	
	if(bRet==TRUE)
	{
		printf("It contains Vowel");
	}
	else
	{
		printf("It not contains Vowel");
	}
	return 0;
}
