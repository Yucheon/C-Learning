#include <iostream>

using namespace std;

struct Something			//�ι�° ����ü
{
	int v1;
	float v2;
};

struct Other		//ù ��° ����ü
{
	Something st;
};

int main()
{
	int value = 5;
	int* const ptr = &value;
	int& ref = value;

	cout <<"ptr�ȿ� ��� value�� �ּ� : " << (uintptr_t)ptr << endl;
	cout << "������ ������ ptr�� �ּ� : " << (uintptr_t)&ptr << endl;
	cout << "���������� ref�� �ּ� : " << (uintptr_t)&ref << endl;
	cout << "int�� ���� value�� �ּ� : " << (uintptr_t)&value << endl;


	*ptr = 10;
	ref = 10;		//�� �ΰ��� ��ɻ� ����

	return 0;
}