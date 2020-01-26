/*	Accept N numbers from user and accept Range, Display all elements from that range.
Input :N :	6
	Start	:	60
	End	:	90	
Elements : 	85	66	3	76	93	88
Output :		85	66	76	88	*/

#include<stdio.h>
#include<malloc.h>

void Range(int Arr[], int iLength,int Start,int End)
{
	int i=0;
	if(Start>End)
	{
		printf("Invalid Range");
		return ;
	}
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]>Start)&&(Arr[i]<End))
		{
			printf("%d\t",Arr[i]);
		}
	}
}

int main()
{
	int Size=0,Value1=0,Value2=0;
	int *p=NULL;
	int i=0;
	printf("Enter the Size");
	scanf("%d",&Size);
	
	printf("Enter the Range");
	scanf("%d%d",&Value1,&Value2);
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
	
	Range(p,Size,Value1,Value2);
	return 0;
}
