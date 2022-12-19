#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	const unsigned char opt0 = 1 << 0;	//������1�� ���¸� ��Ÿ���� ����
	const unsigned char opt1 = 1 << 1;	//������2�� ���¸� ��Ÿ���� ����
	const unsigned char opt2 = 1 << 2;	//������3�� ���¸� ��Ÿ���� ����
	const unsigned char opt3 = 1 << 3;	//������4�� ���¸� ��Ÿ���� ����

	cout << bitset<8>(opt0) << endl;	//00000001
	cout << bitset<8>(opt1) << endl;	//00000010
	cout << bitset<8>(opt2) << endl;	//00000100
	cout << bitset<8>(opt3) << endl;	//00001000

	unsigned char items_flag = 0;		//�������� ���� ����
	cout << "NO item" << bitset<8>(items_flag) << endl;	//

	//item0 on
	items_flag |= opt0;										//������1�� ����ٰ� ��Ÿ���� ���� ǥ����
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl;	//00000001

	//item3 on
	items_flag |= opt3;										//������3�� ����ٰ� ��Ÿ���� ���� ǥ����
	cout << "Item3 obtained" << bitset<8>(items_flag) << endl;	//00001001

	//item3 lost
	items_flag &= ~opt3;									//������3�� �Ҿ����
	cout << "Iten3 lost" << bitset<8>(items_flag) << endl;

	//has item1 ?
	if (items_flag & opt1)									//������1�� ������ �ִ°�?
	{
		cout << " item1 has" << endl;
	}
	else
	{
		cout << "no item1 is none" << endl;
	}

	//obtain item 2,3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained" << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))		//������3�� ������ �����鼭
															//������2�� ������ ���� �ʴٸ�
	{
		items_flag ^= opt2;
		items_flag ^= opt1;
	}

	cout << bitset<8>(items_flag) << endl;					//00001011

	return 0;
}