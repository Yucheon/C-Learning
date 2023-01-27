#include <iostream>

using namespace std;

class Something
{
public:
	static constexpr int s_value =1;
};

//int Something::m_value = 1;		//����ƽ����� ��� ���Ǹ� cPP�ȿ��� �����Ұ�!

int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;		//00EAC000 1

	Something st1;
	Something st2;

	//st1.m_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;						//00EAC000 2
	cout << &st2.s_value << " " << st2.s_value << endl;						//00EAC000 2

	//Something::m_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;		//00EAC000 1024

	return 0;
}