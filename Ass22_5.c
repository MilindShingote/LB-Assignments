/*	Accept N numbers from user and accept one another number as NO,return frequency of NO form it.
Input :N :	6
	No		:	66	
Elements : 	85	66	11	80	66	88	
Output :	2	*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Frequency(int Arr[], int iLength,int No)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==No)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int Size=0,iRet=0,Value=0;
	int *p=NULL;
	int i=0;
	printf("Enter the Size");
	scanf("%d",&Size);
	
	printf("Enter the number which you want to search");
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
	
	iRet=Frequency(p,Size,Value);
	
	printf("The frequency of 11 is %d",iRet);
	
	return 0;
}
