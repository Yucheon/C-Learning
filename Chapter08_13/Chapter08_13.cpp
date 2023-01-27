#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cent;

public:
	Cents(int input)
		:m_cent(input)
	{
		//m_cent = input;
	}
	int getcents() const
	{
		return m_cent;
	}
};

Cents add(const Cents& a, const Cents& b)
{
	return Cents(a.getcents() + b.getcents());
}

int main()
{
	cout << add(Cents(56) , Cents(4)).getcents() << endl;	//add�� ���ϰ��� Cents�� ������Ʈ�̹Ƿ�
															//getcents()�� �� ����� �� �ִ�.

	return 0;
}