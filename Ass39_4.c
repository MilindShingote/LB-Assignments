/*Write a program which accept two strings from user and concat alternate characters from second string at the end of first string.

Input :	“Marvellous”
			“Infosystems”

Output :	MarvellousIfsses	*/

#include<stdio.h>

void strCatX(char *str1,char *str2)
{	
	while(*str1!='\0')
	{
		str1++;
	}
	
	while(*str2!='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
		if(*str2!='\0')
		{
			str2++;
		}
	}
	
}

int main()
{
	char arr[50]="Marvellous";
	char brr[50]="Infosystems";
	strCatX(arr,brr);
	
	printf("%s",arr);		
	return 0;
}
