/*	Write a program which displays ASCII table. Table contains symbol,Decimal, 
	Hexadecimal and Octal representation of every member from 0 to 255.	*/

#include<stdio.h>

void Display(char cValue)
{
	int i=0;
	int iCnt=0;
	for(i=1;i<=255;i++)
	{
		printf("%c\t",cValue);
		if(iCnt>=20)
		{
			printf("\n");
			iCnt=0;
		}
		iCnt++;
		cValue=cValue+1;
	}
}

int main()
{
	char ch='a';
	
	Display(ch);
	
	return 0;
}


