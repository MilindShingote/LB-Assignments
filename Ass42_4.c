/*	Write a program which return largest element from singly linear linked list.

Input linked list : |110|->|230|->|320|->|240|
Output : 320		*/

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

int Maximum(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int Max=0;
	while(Temp!=NULL)
	{
		if((Temp->Data)>Max)
		Max=(Temp->Data);
		Temp=Temp->Next;
	}
	return Max;
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
	iRet=Maximum(Head);
	printf("\nThe Largest element is %d\n",iRet);
	return 0;
}



