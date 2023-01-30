#include <iostream>

using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int& i_in)
		:m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}
	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child :public Mother
{
private:
	double m_d;

public:
	Child(const int& i_in, const double& d_in)	//�ڽ� Ŭ������ ������
		//Mother::m_i(i_in)
		:Mother(i_in), m_d(d_in)				//�Ķ���� i_in�� MotherŬ������ �־� �ָ鼭 �����ڸ� ȣ��
	{
		//Mother::setValue(i_in);	//�θ�Ŭ������ �Լ��� �ҷ���
		//m_d=d_in;
	}
	void setValue(const double& i_d)
	{
		m_d = i_d;
	}

	double getValue()
	{
		return m_d;
	}
};

int main()
{
	Child child(1,1.2);

	cout << child.Mother::getValue() << endl;
	cout << child.getValue()<< endl;

	return 0;
}