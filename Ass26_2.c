/*	Accept character from user. If character is small display its corresponding capital character, and if it small then display its
	corresponding capital. In other cases display as it is.
Input :	Q		Output : q

Input :	m		Output : M

Input :	4		Output : 4

Input :	%		Output : %	*/

#include<stdio.h>

void Display(char cValue)
{
	if((cValue>='a')&&(cValue<='z'))
	{
		printf("%c",cValue-32);
	}
	else if((cValue>='A')&&(cValue<='Z'))
	{
		printf("%c",cValue+32);
	}
	else
	{
		printf("%c",cValue);
	}
}

int main()
{
	char ch='\0';
	
	printf("Enter the Value");
	scanf("%c",&ch);
	Display(ch);
	
	return 0;
}


