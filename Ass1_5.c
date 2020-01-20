//Accept number from user and display its factors

#include<stdio.h>

void Factor(int No)
{
	int i=0;
	if(No<0)
	{
		No=-No;
	}
	for(i=1;i<No;i++)
	{
		if(No%i==0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int Value;
	printf("Enter the number: ");	
	scanf("%d",&Value);	
	
	Factor(Value);
	
	return 0;
	
}
