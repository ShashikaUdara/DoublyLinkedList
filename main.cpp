#include <iostream>
#include <sstream>
#include "DoublyLinkedList.h"

int main()
{
	int i;
	string tempBuff = "", tempStr = "";
	stringstream sstr;

	DoublyLinkedList dl;
	
	// inserting 100 strings to the singly list
	for(i=0; i<100; i++)
	{
		sstr << i;
		sstr >>tempBuff;
		tempStr = "String no:" + tempBuff;
		dl.insertData(tempStr);
		sstr.clear();
		tempStr = "";
		tempBuff = "";
	}

	dl.displayDataReverse();
	dl.displayDataForward();
}