#include <iostream>
#include "MyConstants.h"

using namespace std;

/*
*	int g_x; // external linkage		�ʱ�ȭ�� ���ϰ� ���Ǹ� �� ���
*	static int g_x; // internal linkage �ٸ� cpp���Ͽ��� ������ �� ����.
*	const int g_x;  // ���� �ʱ�ȭ�� �����ְ� �ֱ� ������ ��� ����
	
	extern int g_z;
	extern const int g_z; //�ٸ� �� �ѱ��������� �ʱ�ȭ�� ���־����

	int g_y(1);
	static int g_y(1);	//�ܺο��� ����� �� ���� internal linkage
	const int g_y(1); //���� ���� �ȿ����� ���� 

	extern int g_w(1); //�ٸ� ������ �ʱ�ȭ�� ���ָ� �ȵȴ�.
	extern const int g_w(1); //
*/
int main()
{

	return 0;
}