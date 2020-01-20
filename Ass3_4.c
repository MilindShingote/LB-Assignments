//Accept one character from user and convert case of that character

#include<stdio.h>

void Display(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		printf("%c\n",ch-32);
	}
	else
	{
		printf("%c\n",ch+32);
	}
}

int main()
{
	char ch='\0';
	printf("Enter the Character");
	scanf("%c",&ch);
	
	Display(ch);
	return 0;
}
