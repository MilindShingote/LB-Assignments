/*Write a program which accept string from user and copy that characters of that string into another string in reverse order.

Input : “Marvellous Python”
Output : “nohtyP suollevraM”	*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
	int iCnt=0;
	while(*src!='\0')
	{
		iCnt++;
		src++;
	}
	src--;
	iCnt--;
	
	while(iCnt>=0)
	{
		*dest=*src;
		src--;
		dest++;
		iCnt--;
	}
	
}

int main()
{
	char arr[50] = "Marvellous Python";
	char brr[30];
	
	StrCpyRev(arr,brr);
	printf("%s",brr);	
	return 0;
}
