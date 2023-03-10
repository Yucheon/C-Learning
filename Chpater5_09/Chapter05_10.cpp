#include <iostream>

using namespace std;

int getInt()
{
	cout << "Enter an integer number : ";
	int x;
	cin >> x;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Invaild number, please try again" << endl;
	}
	else
	{
		std::cin.ignore(32767, '\n');
		return x;
	}
}

char getOperator()
{
	cout << "Enter an operator (+,-) : ";
	char op;
	cin >> op;
	return op;
}
void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else
	{
		cout << "Invalid operator" << endl;
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}