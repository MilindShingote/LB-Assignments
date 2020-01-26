/*	Accept N numbers from user check whether that numbers contains 11 in it or not.
Input :N :	6
Elements : 85	66	11	80	93	88	
Output :	11	is present	*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequency(int Arr[], int iLength)
{
	int i=0;
	int Even=0,Odd=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			break;
		}
	}
	if(Arr[i]==11)
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
	int Size=0;
	BOOL bRet=FALSE;
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
	
	bRet=Frequency(p,Size);
	
	if(bRet==TRUE)
	{
		printf("11 is Present");
	}
	else
	{
		printf("11 is not Present");
	}
	return 0;
}
