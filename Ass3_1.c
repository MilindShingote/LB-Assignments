//write a program which accept one number from user and print that number of even numbers on screen
//	Input	:	7
//	Output:	2	4	6	8	10	12	14

#include<stdio.h>

void DisplayEven(int No)
{
	int iCnt=0,i=0;
	if(No<0)
	{
		No=-No;
	}
	for(i=1;i<=(No*2);i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int Value=0;
	printf("Enter the Value");
	scanf("%d",&Value);
	
	DisplayEven(Value);
	return 0;
}
