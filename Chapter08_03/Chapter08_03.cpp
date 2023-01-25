#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;	//����
	int m_denominator;	//�и�

public:
	Fraction(const int &num_in, const int &den_in=1)	//�����ڿ� �Ķ���� �ֱ�, default������ �����ϴ�!
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};
int main()
{
	Fraction frac(1,3);

	frac.print();		//��������� �ʱ�ȭ ������ �ʾұ� ������ �̻��� ���� ��� �ȴ�.

	return 0;
}