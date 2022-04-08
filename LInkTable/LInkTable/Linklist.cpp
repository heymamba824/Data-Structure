#include"LinkList.h"
#include<iostream>
using namespace std;
List::List()//初始化
{
	head = new Node;
	size = 0;
	head->data=0;
	head->next =nullptr;
}
List::~List()//析构
{
	delete head;
	cout << "free table" << endl;
}
void List::Add_Node(int value)
{
	if (head == nullptr) {
		return;
	}
	Insert_Node(size, value);
}
void List::Insert_Node(int pos, int value)
{
	if (head == nullptr) {
		return;
	}
	Node* newnode = new Node;
	newnode->data = value;
	newnode->next = nullptr;
	Node* pCurrent = head;
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}
	newnode->next = pCurrent->next;
	pCurrent->next = newnode;
	size++;
}
void List::Print_List()
{
	if (head == nullptr)
		return;
	Node* pCurrent = head->next;
	while (pCurrent != nullptr)
	{
		cout << pCurrent->data << "   ";
		pCurrent = pCurrent->next;
	}
}
int List::Find_Pos(int value) {
	int pos = 0;
	Node* pCurrent = head->next;
	for (int i = 0; i < size; i++)
	{
		if (pCurrent->data == value)
		{
			pos = i;
			break;
		}
		pCurrent = pCurrent->next;
	}
	return pos;
}

int List::Get_Size()//获得链表长度
{
	if (head == nullptr) {
		return 0;
	}
	return size;
}


void List::Delete_Node(int pos)
{
	if (head == nullptr)
		return;
	if (pos<0 || pos>=size)
		return;
	Node* pCurrent;
	pCurrent = head;
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;
	}
	/*pCurrent->next = pCurrent->next->next;
	*/// free delete pos
	Node* pDel = pCurrent->next;
	pCurrent->next=pDel->next;
	delete pDel;
	size--;
}