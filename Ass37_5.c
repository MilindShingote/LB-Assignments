/*	Write a program which accept string from user and replace each occurrence of first character of each word into capital case.

Input : “marvellous infosystems by Piyush khairnar”
Output : “Marvellous Infosystems By Piyush Khairnar”	*/

#include<stdio.h>

void StrCap(char *str)
{
	char Temp='\0';
	char *First=NULL;
	char *Last=NULL;
	First=str;
	Last=str;
	while(*str!='\0')
	{	
		if(*str!=' ')
		{
			if((*str>='a')&&(*str<='z'))
			{
				*str=*str-32;
			}
		}
		while(*str!=' ')
		{
			str++;
		}
		str++;
		
	}
}

int main()
{
	char arr[50] = "marvellous infosystems by Piyush khairnar";
	
	StrCap(arr);

	printf("%s",arr);
	return 0;
}	
