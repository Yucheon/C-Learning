#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";	//11�ڸ�
	char dest[5];					//11�ڸ� ���� �޸𸮸� �� ���� �ְ� �Ǹ�
	strcpy(dest, source);			//��Ÿ�� ���� �߻�!!

	cout << source << endl;
	cout << dest << endl;

	return 0;
}