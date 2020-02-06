/*	Write a program which returns addition of all element from singly linear linked list.

Input linked list : |10|->|20|->|30|->|40|
Output : 100		*/

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

int Addition(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int Sum=0;
	while(Temp!=NULL)
	{
		Sum=Sum+(Temp->Data);
		Temp=Temp->Next;
	}
	return Sum;
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
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	Display(Head);
	iRet=Addition(Head);
	printf("\nThe Addition is %d\n",iRet);
	return 0;
}



