#include <iostream>
using namespace std;

class A
{
public:
	void print()
	{
		cout << "A" << endl;
	}
	virtual A* getThis() { return this; }
};

class B :public A
{
public:
	void print()
	{
		cout << "B" << endl;
	}
	virtual B* getThis() { return this; }
};

class C : public B
{
public:
	void print()
	{
		cout << "C" << endl;
	}
};

int main()
{
	A a;
	B b;
	//C c;

	A& ref = b;				//AŬ������ ���۷����� b�� ����
	b.getThis()->print();	//�������� B�� ������	,B ,Ŭ���� B�� �����
	ref.getThis()->print();	//virtual�Լ� ������ ��� ,A, Ŭ���� A�� �����

	cout << typeid(b.getThis()).name() << endl;		//class B *
	cout << typeid(ref.getThis()).name() << endl;	//class A *
	
	return 0;
}