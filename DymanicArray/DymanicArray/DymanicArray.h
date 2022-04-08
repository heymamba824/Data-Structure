#pragma once
class DymanicArray {
private:
	int size;
	int capacity;
	int* pAdd;
public:
	DymanicArray();//初始化
	~DymanicArray();//释放
	void Array_Pushback(int value);//插入
	void Array_DeleteVal(int value);//根据值删除
	int Array_FindPos(int value);
	void Array_DeletePos(int pos);//根据位置删除
	void Array_Print();//打印
	int Array_Capacity();
	int Array_Size();
	int At_Array(int pos);
};