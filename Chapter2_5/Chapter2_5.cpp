#include <iostream>

using namespace std;

int main()
{
	int a;
	bool result;

	cout << "a�� �Է��ϼ���" << endl;
	cin >> a;


	result=(a % 2 == 0);

	if (result)
	{
		cout << "�Է¹��� ���� ¦��" << endl;
	}
	else
	{
		cout << "�Է¹��� ���� Ȧ��" << endl;
	}
	return 0;
}