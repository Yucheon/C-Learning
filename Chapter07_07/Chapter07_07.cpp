#include <iostream>

using namespace std;

typedef int my_int;

void print(char *value) {};
void print(int value) {};

int main()
{
	print(0);
	print('a');	//int�� �ν� char�� �ƴ϶�
	return 0;
}