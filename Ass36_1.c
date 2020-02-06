/*	Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function). 
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input :	“Marvellous Infosystems”
			“Logic Building”
			5
Output :	“Marvellous Infosystems Logic”	*/

#include<stdio.h>
void StrNCatX(char *src, char *dest, int iCnt)
{
	while(*src!='\0')	
	{
		src++;
	}
	*src=' ';
	src++;
	while(iCnt!=0)
	{
		iCnt--;
		*src=*dest;
		src++;
		dest++;
	}
	
}


int main()
{
	char arr[50] = "Marvellous Infosystems";
	char brr[30] = "Logic Building";
	int iValue=0;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	StrNCatX(arr,brr,iValue);
	printf("%s",arr);
	
	return 0;
}
