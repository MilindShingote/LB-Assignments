/*	Write a program which accept string from user and copy that characters of that string into another string by converting all small
characters into capital case.

Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”	*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*dest=*src-32;
			dest++;
		}
		else
		{
			*dest=*src;
			dest++;
		}
		src++;
	}
	*dest='\0';
}

int main()
{
	char arr[50] = "Marvellous Python 2";
	char brr[30];
	
	StrCpyX(arr,brr);
	printf("%s",brr);	
	return 0;
}
