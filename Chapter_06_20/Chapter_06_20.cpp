#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

void PrintArra(array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}
int main()
{
	//int array[5] = { 9,87,4,21,5 };

	array<int, 5>my_arr = { 1,21,3,40,5 };

	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.begin(), my_arr.end());		//�����Ͽ� �迭�� ���� ������� ����

	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}