/*	Write a program which accept two strings from user and display length of both the strings.
Input :	“Marvellous”
			“Infosystems”
Output :10	11		*/

#include<stdio.h>

void stren(char *str1,char *str2)
{
	int iCnt1=0,iCnt2=0;
	
	while(*str1!='\0')
	{
		str1++;
		iCnt1++;
	}
		
	while(*str2!='\0')
	{
		str2++;
		iCnt2++;
	}
	printf("%d\t%d",iCnt1,iCnt2);
}

int main()
{
	char arr[50]="Marvellous";
	char brr[50]="Infosystems";
		
	stren(arr,brr);
	
	return 0;
}
