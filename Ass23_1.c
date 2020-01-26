/*	Accept N numbers from user and return frequency of 11 form it.
Input :N :	6
	No	:	11	
Elements : 85	66	11	80	11	88	
Output :	It is present.	*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequency(int Arr[], int iLength,int No)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==No)
		{
			break;
		}
	}
	if(i!=iLength)
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
	int Size=0,Value=0;
	int *p=NULL;
	int i=0;
	BOOL bRet=FALSE;
	printf("Enter the Size");
	scanf("%d",&Size);
	
	printf("Enter the Value");
	scanf("%d",&Value);
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
	
	bRet=Frequency(p,Size,Value);
	
	if(bRet==TRUE)
	{
		printf("It is present");
	}
	else
	{
		printf("It is not present");
	}
	return 0;
}
