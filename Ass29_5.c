/*	Write a program which accept string from user reverse that string in place.

Input : “abcd” 
Output : “dcba”

Input : “abba”
Output : “abba”	*/

#include<stdio.h>


void Reverse(char *str)
{
	char *Start=NULL,*End=NULL;
	Start=str;
	End=str;
	char Temp='\0';
	while(*End!='\0')
	{
		End++;
	}
	End--;
	
	while(Start<End)
	{
		Temp=*Start;
		*Start=*End;
		*End=Temp;
		Start++;
		End--;
	}
}
int main()
{
	char arr[20];
	char cValue='\0';

	printf("Enter string");
	scanf("%[^'\n']s",arr);

	Reverse(arr);
	
	printf("%s",arr);
	return 0;
}
