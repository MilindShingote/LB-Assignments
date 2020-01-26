/*	Accept N numbers from user and display all such numbers which contains 3 digits in it.
Input :N :	6
Elements : 8225	665 3	76	953 858
Output :	665 953 858		*/

#include<stdio.h>
#include<malloc.h>

void Digits(int Arr[], int iLength)
{
	int i=0,iCnt=0;
	int No=0;
	for(i=0;i<iLength;i++)
	{
		No=Arr[i];
		while(No!=0)
		{
			iCnt++;
			No=No/10;
		}
		
		if(iCnt==3)
		{
			printf("%d\t",Arr[i]);
		}
		iCnt=0;
	}
}

int main()
{
	int Size=0;
	int *p=NULL;
	int i=0;
	printf("Enter the Size");
	scanf("%d",&Size);
	
	p=(int*)malloc(Size*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter the elements:");
	for(i=0;i<Size;i++)
	{
		scanf("%d",&p[i]);
	}
	
	Digits(p,Size);

	return 0;
}
