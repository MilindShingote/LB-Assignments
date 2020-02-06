/*	Write a program which display all palindrome elements of singly linked list.

Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output :	11	6	414		*/

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

void DisplayPallindrome(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int Digit=0,Sum=0;
	int No=0;
	printf("\n");
	while(Temp!=NULL)
	{
		No=Temp->Data;
		while(No!=0)
		{
			Digit=No%10;
			Sum=(Sum*10)+Digit;
			No=No/10;
		}
		if((Temp->Data)==Sum)
		{
			printf("%d\t",Sum);
		}
		Sum=0;
		Digit=0;
		Temp=Temp->Next;
	}
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

	InsertFirst(&Head,6);
	InsertFirst(&Head,141);
	InsertFirst(&Head,23);
	InsertFirst(&Head,11);

	Display(Head);
	DisplayPallindrome(Head);
	
	return 0;
}

