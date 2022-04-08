#pragma once
class Node {
public:
	int data;
	Node* next;
};

class List
{
private:
	int size;
	Node *head;
public:
	List();//初始化
	~List();//析构
	void Add_Node(int value); //值插入
	void Insert_Node(int pos, int value);//按照位置插入
	int Find_Pos(int value);//找到位置
	void Delete_Node(int pos);//指定位置删除
	void Print_List();//打印
	int Get_Size();//获得链表长度
};