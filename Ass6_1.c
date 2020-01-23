/*	Write a program which accept name from user and print that name.

Input : Piyush Khairnar
Output : Piyush Khairnar	*/

#include<stdio.h>

int main()
{
	char Name[30];
	printf("Enter the String");
	scanf("%[^'\n']s",Name);
	
	printf("%s",Name);
	return 0;
}
