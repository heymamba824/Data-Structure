

#include <iostream>
using namespace std;
#include"LinkList.h"
int main()
{
    std::cout << "Hello World!\n";
    List l1;
    for (int i = 0; i < 10; i++)
    {
        l1.Add_Node(i);
    }
    l1.Print_List();
    cout<<"size:" << l1.Get_Size() << endl;
    cout << "postion:" << l1.Find_Pos(4) << endl;
    l1.Delete_Node(5);
    l1.Print_List();
    cout << "size:" << l1.Get_Size() << endl;
    cout << "postion:" << l1.Find_Pos(4) << endl;
}


