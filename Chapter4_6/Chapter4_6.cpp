#include <iostream>
#include <string>		//std string ���

using namespace std;

int main()
{

	string a("Hello, ");
	string b("world ");
	string hw = a + b;//append;

	hw += "I'm good";

	cout << hw.length() << endl;		//������ ���̸� ���

	return 0;
}