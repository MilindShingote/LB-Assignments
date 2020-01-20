//Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not.
 
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Display(char ch)
{
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char ch='\0';
	BOOL bRet=FALSE;
	printf("Enter the Character");
	scanf("%c",&ch);
	
	bRet=Display(ch);
	if(bRet==TRUE)
	{
		printf("This character is vowel");
	}
	else
	{
		printf("This is not vowel");
	}
	return 0;
}
