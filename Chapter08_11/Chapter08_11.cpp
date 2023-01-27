#include <iostream>

using namespace std;

class Something
{
public:
	class _init				//Ŭ���� �ȿ� Ŭ������ ����
	{
	public:
		_init()
		{
			s_value = 9876;	//SomethingŬ������ �̳�Ŭ������_init�ǻ����ڿ��� S_value�� �ʱ�ȭ
		}
	};

private:
	static int s_value;
	int m_value;
	  
	static _init s_inintializer;	//�̳� Ŭ������ ����ƽ���� �ν��Ͻ� ����

public:
	Something()
		:m_value(123)
	{
		
	}
	static int getValue()
	{
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value = 1024;
Something::_init Something::s_inintializer;		//�̳�Ŭ������ �ν��Ͻ��� ����

int main()
{
	cout << Something::getValue() << endl;	//1024

	Something s1;
	Something s2;

	cout << s1.getValue() << endl;			//1024
	//cout << s1.s_value << endl;

	int (Something:: * fptr1)() = &Something::temp;		//�Լ��� �����͸� �����ϰ� 
														//�ش� �����Ϳ� temp�Լ��� �ּҸ� ����

	cout << (s2.*fptr1)() << endl;		//�ν��Ͻ� s2�� '��'�Լ������͸� ���

	int (* fptr2)() = &Something::getValue;

	return 0;
}