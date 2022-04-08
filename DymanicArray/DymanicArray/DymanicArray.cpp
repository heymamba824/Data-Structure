// DymanicArray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"DymanicArray.h"
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    DymanicArray a1;
    for (int i = 0; i < 10; i++)
        a1.Array_Pushback(i);
    a1.Array_Print();
    a1.Array_DeletePos(2);
    a1.Array_Print();
    cout << a1.Array_Size() << endl;
}

