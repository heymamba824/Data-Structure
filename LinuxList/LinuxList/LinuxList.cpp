// LinuxList.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//Mydata data1
//LinkNode *node = (LinkNode*) &(data1)
#include <iostream>
using namespace std;
class Node {
public:
    Node* next;
};
class LinuxList {
public:
    int size;
    Node head;
    void List_insert(int pos, Node* data);
    void List_delete(int pos);
    void Link_print();
    LinuxList() {
        head.next = nullptr;
        size = 0;
    }
};

void LinuxList::List_insert(int pos, Node* data)
{
    if (data == nullptr)
        return;
    if (pos<0 || pos> size)
        return;
    //查找插入位置
    Node* pCurrent = &head;
    for (int i = 0; i < pos; i++)
    {
        pCurrent = pCurrent->next;
    }
    data->next = pCurrent->next;
    pCurrent->next = data;
    size++;
}
void LinuxList::List_delete(int pos)
{
    if (pos<0 || pos> size)
        return;
    Node* pCurrent = &head;
    for (int i = 0; i < pos; i++)
    {
        pCurrent = pCurrent->next;
    }
    pCurrent->next = pCurrent->next->next;
    size--;
}
int Link_size()
{
    return 0;
}
void LinuxList::Link_print()
{
    Node* pCurrent = &head;
    while (pCurrent != nullptr)
    {
        cout << pCurrent << "  ";
        pCurrent = pCurrent->next;
    }
}
int main()
{
    cout << "Hello World!\n";
}
