#include <iostream>

using namespace std;

int main()
{
	int* ptr = new int{ 7 };	//int�� ������ ���� ptr�� �����ϰ� OS�� ���� �޸𸮸� �޾ƿ� 7�� ������

	cout <<"�� int�� �������� �ּҴ�" << ptr<<"�̰�," << endl;
	cout << "�ȿ� ����ִ� ����" << *ptr << "�̴�" << endl;

	int length = 5;
	int* array = new int[5] {11,4,5,8,64};		

	int array[5];
	int* num = array;

	cout << num[3] << endl;
	cout << array[3] << endl;


	return 0;
}