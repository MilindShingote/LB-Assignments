/*	Write a program which accept string from user and copy the contents into another string by removing extra white spaces.

Input : “Marvel lous multi
Output : “Marvellous multi OS”	*/

#include<stdio.h>

void StrWrdRev(char *str,char *dest)
{
	int iCnt=0;
	while(*str!='\0')
	{
		while((*str!=' ')&&(*str!='\0'))
		{
			*dest=*str;
			dest++;
			str++;
		}
		
		while(*str==' ')	
		{
			iCnt++;
			if(iCnt==1)
			{
				*dest=*str;
				dest++;
				str++;
			}
			str++;
		}
		iCnt=0;
	}
	*dest='\0';		
		
}

int main()
{
	char arr[50] = "Marvellous      Multi        OS";
	char brr[50];
	StrWrdRev(arr,brr);

	printf("%s",brr);
	return 0;
}	
