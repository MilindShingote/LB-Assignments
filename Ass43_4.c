/*	Write a program which return second maximum element from singly linear linked list.

Input linked list : |110|->|230|->|320|->|240|
Output : 240	*/

#include<stdio.h>
#include<malloc.h>
struct node
{
	int Data;
	struct node *Next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First,int No)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));

	Newn->Next=NULL;
	Newn->Data=No;

	if(*First==NULL)
	{
		*First=Newn;
	}
	else
	{
		Newn->Next=*First;
		*First=Newn;
	}
}

int SecMaximum(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int i=0,Max1=0,Max2=0;
	printf("\n");
	while(Temp!=NULL)
	{
		if((Temp->Data)>Max1)
		{
			if(Max1>Max2)
			{
				Max2=Max1;
			}
			else
			{
				Max1=Temp->Data;
			}
		}
		else if((Temp->Data)>Max2)
		{
			Max2=Temp->Data;
		}
		Temp=Temp->Next;
	}
	return Max2;
}
void Display(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	printf("Input Linked list is:\t");
	while(Temp!=NULL)
	{
		printf("%d\t",Temp->Data);
		Temp=Temp->Next;
	}
}

int main()
{
	PNODE Head = NULL;
	int iRet=0;

	InsertFirst(&Head,240);
	InsertFirst(&Head,320);
	InsertFirst(&Head,230);
	InsertFirst(&Head,110);

	Display(Head);
	iRet=SecMaximum(Head);
	printf("The second Maximum elements is %d\n",iRet);
	return 0;
}

