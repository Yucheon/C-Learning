#include <iostream>

using namespace std;

class Base
{
public :
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_protected;		//protected����
		//Base::m_private;		//�Ұ���
	}
};

//class GrandChild : protected Derived
//{
//public:
//	GrandChild()
//	{
//		Derived::
//	}
//};
int main()
{
	Derived derived;
	//derived.m_protected = 222;	//�ܺο��� ����ϱ� ������ protected�Ұ���
}