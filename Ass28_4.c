/*	Write a program which accept string from user and display only digits from that string.
	
Input : “marve89llous121”

Output : 89121	*/

#include<stdio.h>

void struprx(char *str)
{
	while(*str!='\0')
	{
		if((*str>='0')&&(*str<='9'))
		{
			printf("%c",*str);
		}
		str++;
	}
}

int main()
{
	char arr[20];
	printf("Enter string");
	scanf("%[^’\n’]",arr);
	
	struprx(arr);	
	return 0;
		
}
