#include <iostream>
#include <typeinfo>

enum Color		//user-defined data types(����� ���� ������ �ڷ���)
{
	COLOR_BLACK=-2,
	COLOR_RED,
	COLOR_BLUE=5,
	COLOR_GREEN=5,
	COLOR_SKYBLUE,
	BLUE,				
};

int main()
{
	using namespace std;

	int color_id = COLOR_RED;		//int������ enum�Ҵ�

	cout << color_id << endl;		//-0

	//Color My_Color = color_id;		//enum���� int�ʱ�ȭ�� �Ұ���

	Color My_Color2 = static_cast<Color>(-2);

	cout << My_Color2 << endl;

	return 0;
}