/*	Write a program which returns addition of all even element from singly linear linked list.

Input linked list : |11|->|20|->|32|->|41|
Output : 52	*/

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

int AdditionEven(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int i=0,Sum=0;
	printf("\n");
	while(Temp!=NULL)
	{
		if((Temp->Data)%2==0)
		{
			Sum=Sum+(Temp->Data);
		}
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

	InsertFirst(&Head,41);
	InsertFirst(&Head,32);
	InsertFirst(&Head,20);
	InsertFirst(&Head,11);

	Display(Head);
	iRet=AdditionEven(Head);
	printf("The Addition of Even elements is %d\n",iRet);
	return 0;
}

