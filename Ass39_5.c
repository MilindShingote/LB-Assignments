/*Write a program which accept two strings from user and concat second string at the end of first string in reverse order.

Input :	“Marvellous”
			“Python”
Output :	MarvellousnohtyP	*/

#include<stdio.h>

void strCatX(char *str1,char *str2)
{	
	int iCnt=0;
	while(*str1!='\0')
	{
		str1++;
	}
	
	while(*str2!='\0')
	{
		iCnt++;
		str2++;
	}
	str2--;
	while(iCnt!=0)
	{
		*str1=*str2;
		str1++;
		str2--;
		iCnt--;
	}
	
}

int main()
{
	char arr[50]="Marvellous";
	char brr[50]="Python";
	strCatX(arr,brr);
	
	printf("%s",arr);		
	return 0;
}
