#include <iostream>

using namespace std;

void doSomething(double *ptr)
{
	if (ptr != nullptr)
	{
		//do something useful
		cout << *ptr << endl;
	}
	else
	{
		//do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double* ptr{ nullptr };		//c-style
	double* ptr_a = nullptr;//modern c++
	double* ptr_b{nullptr};	//������ �ʱ�ȭ


	doSomething(ptr);		//null�� �ʱ�ȭ �����Ƿ�, Null ptr, do nothing
	doSomething(nullptr);	//nullptr�̹Ƿ�, Null ptr, do nothing

	double d = 123.4;

	doSomething(&d);		//123.4

	ptr = &d;

	doSomething(ptr);		//123.4


	return 0;
}