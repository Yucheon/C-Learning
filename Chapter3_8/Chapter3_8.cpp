#include <iostream>
#include <bitset>		//�������� �ٲ㼭 ������ִ� ���̺귯��

using namespace std;

int main()
{
	unsigned int a = 0b1100;	//������1100
	unsigned int b = 0b0110;	//������0100

	cout << std::bitset<4>(a & b) << endl;	//bitwise AND, 0100
	cout << std::bitset<4>(a | b) << endl;	//bitwise OR,  1110
	cout << std::bitset<4>(a ^ b) << endl;	//bitwise XOR, 1010


	return 0;
}