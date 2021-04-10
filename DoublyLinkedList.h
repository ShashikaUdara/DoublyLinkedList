#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

#include <iostream>

using namespace std;

struct Node
{
	string data;
	struct Node* next;
	struct Node* previous;
};

class DoublyLinkedList
{
public:
	struct Node* head = NULL;
	struct Node* tail = NULL;

	DoublyLinkedList() {}
	~DoublyLinkedList() {}
	void insertData(string);
	void displayDataReverse();
	void displayDataForward();
};

#endif