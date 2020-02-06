/*	Accept sing from user and reverse the contents of that string by toggling the case.

Input : “aCBdef”
Output : “FEDbcA”	*/

#include<stdio.h>

void StrRevTogX(char *src)
{
	char *First=NULL;
	char *Last=NULL;
	char Temp='\0';
	First=src;
	Last=src;
	while(*Last!='\0')
	{
		Last++;
	}
	Last--;
	while(First<Last)	
	{	
		if((*First>='A')&&(*First<='Z')&&(*Last>='A')&&(*Last<='Z'))
		{
			Temp=*First+32;
			*First=*Last+32;
			*Last=Temp;
		}
		else if((*First>='a')&&(*First<='z')&&(*Last>='a')&&(*Last<='z'))
		{
			Temp=*First-32;
			*First=*Last-32;
			*Last=Temp;
		}
		else if((*First>='a')&&(*First<='z')&&(*Last>='A')&&(*Last<='Z'))
		{
			Temp=*First-32;
			*First=*Last+32;
			*Last=Temp;
		}
		else if((*First>='A')&&(*First<='Z')&&(*Last>='a')&&(*Last<='z'))
		{
			Temp=*First+32;
			*First=*Last-32;
			*Last=Temp;
		}
		First++;
		Last--;
	}
}


int main()
{
	char arr[50] = "aCBdef";

	StrRevTogX(arr);
	printf("%s",arr);
	return 0;
}	
