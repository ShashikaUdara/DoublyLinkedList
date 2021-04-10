#include "DoublyLinkedList.h"

void DoublyLinkedList :: insertData(string buffer)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = buffer;
	newNode->next = head;
	newNode->previous = NULL;

	if(head != NULL)
	{
		head->previous = newNode;
	}
	else
	{
		tail = newNode;
	}

	head = newNode;
}

void DoublyLinkedList :: displayDataReverse()
{
	cout<<"DoublyLinkedList :: displayDataReverse()"<<endl;
	struct Node* dReverseNode;
	dReverseNode = head;

	while(dReverseNode != NULL)
	{
		cout<<dReverseNode->data<<endl;
		dReverseNode = dReverseNode->next;
	}
}

void DoublyLinkedList :: displayDataForward()
{
	cout<<"DoublyLinkedList :: displayDataForward()"<<endl;
	struct Node* dForwardNode;
	dForwardNode = tail;

	while(dForwardNode != NULL)
	{
		cout<<dForwardNode->data<<endl;
		dForwardNode = dForwardNode->previous;
	}
}
