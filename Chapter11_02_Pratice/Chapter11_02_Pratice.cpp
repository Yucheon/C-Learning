#include "Student.h"
#include "Teacher.h"

int main()
{
	Student std("JAck");	
	std.setName("Kim");
	std.getName();			//Student�� ������Ͽ� ���� �ش� �Լ��� ������ �θ�Ŭ������ �����Ǿ� �ִ�.
	std.getIntel();

	Teacher teacher1("Dr.H");
	teacher1.setName("Dr.R");

	std::cout << teacher1.getName() << std::endl;

	std.study();
	teacher1.teach();

	return 0;
}