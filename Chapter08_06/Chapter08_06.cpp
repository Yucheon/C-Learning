#include <iostream>

using namespace std;

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];	//�����Ҵ����� �´� �������� �޸𸮸� ������ ��
		
		cout << "COnstructor" << endl;
	}

	~IntArray()
	{
		if(m_arr!=nullptr)	//���� �� �����ϰ� m_arr�� ������ ���� �ƴ� �� nullptr�� ���� �� ������ ����� ��찡 ���� �ֱ� ������
		delete[] m_arr;		//�޸𸮸� ����ϰ� ����� �����
	}

	int size()
	{
		return m_length;
	}
};

int main()
{
	while (true)
	{
		IntArray my_int_arr(10000);		//my_int_arr�� �߰�ȣ ������ ����� ���� ���� �Ǹ�
	}									//�˾Ƽ� �Ҹ��ڸ� ȣ���ϰ�

	return 0;
}