/*	Write a program which accept string from user and copy small characters of that string into another string.

Input : “Marvellous multi OS”
Output : “arvellous multi”	*/

#include<stdio.h>

void StrCpy(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z')||(*src==' '))	
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
	char arr[30] = "Marvellous multi OS";
	char brr[30];		// Empty string
	
	StrCpy(arr,brr);
	printf("%s",brr);
	return 0;
}
