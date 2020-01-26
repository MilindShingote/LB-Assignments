/*	Write a program which accept string from user and check whether it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE	*/

#include<stdio.h>

void Reverse(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	str--;
	
	while(iCnt>=0)
	{
		printf("%c",*str);
		str--;
		iCnt--;
	}
}

int main()
{
	char Arr[20];

	printf("Enter the String");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	return 0;
}
