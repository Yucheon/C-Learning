#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived :public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main()
{
	Derived d;		
	Base b;	

	std::vector<std::reference_wrapper<Base>> my_vec;	//my_vec�� Base�� ���۷�����(reference_wrapper)�����ϴ� vector�� ��
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec)
		ele.get().print();		//get()�Լ��� Base�� ���۷����� �������ִ� �Լ�
							
	return 0;	
}