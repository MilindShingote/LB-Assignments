/*	Write a program which accept string from user and reverse each word in place.
Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO”	*/

#include<stdio.h>

void StrWrdRev(char *str)
{
	char Temp='\0';
	char *First=NULL;
	char *Last=NULL;
	First=str;
	Last=str;
	while(*str!='\0')
	{	
		while((*Last!=' ')&&(*Last!='\0'))
		{
			Last++;
		}
		str=Last;
		Last--;
		while(First<Last)
		{
			Temp=*First;
			*First=*Last;
			*Last=Temp;
			First++;
			Last--;
		}
		while(*str==' ')
		{
			str++;
		}
		if(*str!='\0')		
		{
			First=str;
			Last=str;
		}
	}
}

int main()
{
	char arr[50] = "Marvellous Multi OS";
	
	StrWrdRev(arr);

	printf("%s",arr);
	return 0;
}	
