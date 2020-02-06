/*	Write a program which return smallest element from singly linear linked list.

Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20		*/

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

int Minimum(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int Min=Temp->Data;
	while(Temp!=NULL)
	{
		if((Temp->Data)<Min)
		Min=(Temp->Data);
		Temp=Temp->Next;
	}
	return Min;
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
	InsertFirst(&Head,20);
	InsertFirst(&Head,230);
	InsertFirst(&Head,110);
	Display(Head);
	iRet=Minimum(Head);
	printf("\nThe Smallest element is %d\n",iRet);
	return 0;
}



