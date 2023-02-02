#include <iostream>

using namespace std;

class Base
{
public :
	virtual ~Base()					//���� �Ҹ��ڸ� ����� �ڽ�Ŭ������ �Ҹ��ڰ� ȣ��ǵ��� ��
	{
		cout << "~Base" << endl;
	}
};

class Derived :public Base
{
private:
	int* m_array;		//�޸� �����Ҵ��� ���� ����

public :
	Derived(int length)
	{
		m_array = new int[length];	//�޸� �����Ҵ� �ο�
	}

	~Derived()
	{
		cout << "~Derived" << endl;
		delete[]m_array;			//�޸� �����ֱ� 
	}
};

int main()
{
	//Derived derived(5);	//~Derived  ~Base

	Derived* derived = new Derived(5);
	Base* base = derived;
	delete base;

	return 0;
}