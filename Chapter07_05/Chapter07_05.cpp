#include <iostream>
#include <array>
#include <tuple>
using namespace std;

std::tuple<int, double> getTuple()	//����� ���� �ڷ��� ó�� ��
{
	int a = 10;						//�ȿ� ����ü�� ����� ���� ����
	double d = 3.14;

	return std::make_tuple(a, d);
}
int main()
{
	std::tuple<int, double>my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;;		//a
	cout<< std::get<1>(my_tp) << endl;;		//d

	return 0;
}