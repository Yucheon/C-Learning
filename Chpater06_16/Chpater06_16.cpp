#include <iostream>

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 9;					//���ٿ�����
	person.weight = 30;

	Person& ref = person;		//���۷����� ����ü�� ������ ����
	ref.age = 18;

	Person* ptr = &person;
	ptr->age = 21;
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;

	std::cout << &person << std::endl;
	std::cout << &ref2 << std::endl;

	return 0;
}