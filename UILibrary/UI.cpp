
#include "UI.h"


UI::UI()
{

}


void UI::Init()
{

}

void UI::StartGUILoop()
{
	Node* head = nullptr;

	Node* cur = nullptr;

	head = new Node(1);

	cur = head;

	Node* temp = new Node(2);

	cur->setNext(temp);

	cur = cur->getNext();

	temp = nullptr;
	temp = new Node(3);

	cur->setNext(temp);

	cur = cur->getNext();

	delete head;
	delete cur;

	ArrayBasedLinkedList* linkedList = new ArrayBasedLinkedList();
	linkedList->clear();
	delete linkedList;

}