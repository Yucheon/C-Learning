#include <iostream>
#include <cmath>

using namespace std;

typedef int* pint;

void foo(int *&ptr)		//������ ������ ���۷����� �޴� ���
{
	cout << ptr<< " "<<&ptr << endl;
}
int main()
{
	int x = 5;
	//int* ptr = &x;
	pint ptr = &x;

	foo(ptr);
	//�����Ϳ� ���� ���۷���
	
	return 0;
}