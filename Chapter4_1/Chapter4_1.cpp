#include <iostream>

using namespace std;

int main()
{
	int apple = 5;		//�� �������� ���� apple�� ����� �� �ִ�.
	cout << apple << endl;		//5
	{
		cout << apple << endl;	//5
		int apple = 1;
		cout << apple << endl;	//1
	}

	cout << apple << endl;		//5

	return 0;
}