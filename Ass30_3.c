/*	Write a program which accept string from user and copy capital characters of that string into another string.

Input : “Marvellous Multi OS”
Output : “MMOS”	*/

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))	
		{
			*dest=*src;
			*dest++;
		}
		*src++;
	}
	*dest='\0';
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30];		// Empty string
	
	StrCpyX(arr,brr);
	printf("%s",brr);
	return 0;
}
