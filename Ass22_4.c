/*	Accept N numbers from user and return frequency of 11 form it.
Input :N :	6
Elements : 85	66	11	80	11	88	
Output :	2	*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Frequency(int Arr[], int iLength)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int Size=0,iRet=0;;
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
	
	iRet=Frequency(p,Size);
	
	printf("The frequency of 11 is %d",iRet);
	
	return 0;
}
