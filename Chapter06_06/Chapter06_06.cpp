#include <iostream>

using namespace std;

int main()
{
	char myString[255];

	//cin >> myString;		//HelloMyFriend �Է½�
	cin.getline(myString, 255);

	cout << myString;
	return 0;
}