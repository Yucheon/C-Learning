#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit=0)
		: m_digit(digit)
	{}

	//prefix	������
	Digit& operator ++()
	{
		++m_digit;
		return *this;		//�ڱ��ڽ��� �������� ���۷����� ���� �ڱ� �ڽ��� ����
	}

	//postfix
	Digit operator++ (int)		//()�ȿ� ���̷� �ƹ��ų� �־��ش�.
	{
		Digit temp(m_digit);
		++(*this);	// == ++m_digit;
		return temp;		//������ temp�� �ѱ�� ++(*this)�� �����ش�.
	}

	friend ostream& operator <<(ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}
};

int main()
{
	Digit d(5);

	cout << ++d << endl;		//6
	cout << d << endl;			//6
		
	cout << d++ << endl;		//6
	cout << d << endl;			//7

	return 0;
}