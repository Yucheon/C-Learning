#include <iostream>

using namespace std;

int getInt()		//do while�̶� for ����ϱ�
{
	while (true)
	{
		cout << "Please enter number" << endl;
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();					//������
			std::cin.ignore(32767, '\n');		//���۸� �����
			cout << "�������� ���� �ƴմϴ�." << endl;
		}

		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperator()
{
	while (true)
	{

	cout << "Please enter Operator" << endl;
	char op;
	cin >> op;
	std::cin.ignore(32767, '\n');		//���۸� �����

	if (op == '+' || op == '-'|| op == '*' ||op == '/')
		return op;
	else
		cout << "�ȹٷ� ��������" << endl;
	}

}

void printResult(int x, char op, int y)		//case ����ϱ�
{
	switch (op)
	{
	case '+':
		{
		cout << x + y << endl;
		}break;
	case '-':
	{
		cout << x - y << endl;
	}break;
	case '*':
	{
		cout << x * y << endl;
	}break;
	case '/':
	{
		cout << x / y << endl;
	}break;
	default:
	{
		cout << "�߸� �Է��߾�" << endl;
	}break;
	}
	//if (op == '+')cout << x + y << endl;
	//else if (op == '-')cout << x - y << endl;
	//else
	//{
	//	cout << "Invalid operator" << endl;
	//}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);
	return 0;
}