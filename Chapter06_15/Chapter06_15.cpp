#include <iostream>

using namespace std;

void doSomething(const int &x)		//�����ͷ� ������ ���� ���簡 �Ͼ���� ������ �ƴ�!!!!
{
	cout << x << endl;
}

int main()
{
	const int& ref_x = 1+ 5;		 //const ���۷��������� ������
	cout << ref_x << endl;			//�� ��µ� �����ϰ�
	cout << &ref_x << endl;		//�ּҵ� ���� �� ����

	int a = 1;	
	doSomething(a);		
	doSomething(5);					//�ٷ� ���� �ֱ� ����
	doSomething(a+5);				//����
	doSomething(6/7);				//����

	return 0;
}