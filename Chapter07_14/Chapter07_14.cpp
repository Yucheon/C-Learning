#include<iostream>
#include <cassert>	//assert.h
#include<array>


int main()
{
	const int x = 5;

	static_assert(x==5,"X should be 5");	//������ Ÿ�ӿ� �����Ǵ� ��쿡�� ��� ����
											//��ǥ �ڿ� ��������� ����
	return 0;
}