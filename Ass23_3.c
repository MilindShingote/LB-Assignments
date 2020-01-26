/*	Accept N numbers from user and accept one another number as NO ,return index of last occurrence of that NO.
Input :N :	6
	No	:	11	
Elements : 85	66	11	80	11	88	
Output :	4	*/

#include<stdio.h>
#include<malloc.h>

int FirstOcc(int Arr[], int iLength,int No)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==No)
		{
			iCnt=i;
		}
	}
	return iCnt; 
}

int main()
{
	int Size=0,Value=0,iRet=0;
	int *p=NULL;
	int i=0;
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
	
	iRet=FirstOcc(p,Size,Value);
	printf("Index is %d",iRet);
	return 0;
}
