//#include <iostream>
//#include <string>
//#include <vector>
#include "Lecture.h"

int main()
{
	Student *std1=new Student("Jack Jack", 0);		//�����ڷ� ����1
	Student *std2 = new Student("Dash", 1);		    //�����ڷ� ����2
	Student *std3 = new Student("Violet", 2);		    //�����ڷ� ����3

	Teacher *teacher1=new Teacher("prof. Hong");		//�����ڷ� �� ����1
	Teacher *teacher2=new Teacher("Prof. Good");		//�����ڷ� �� ����2

	//Compositon Relationship
	Lecture lec1("Introduction to Computer Programing");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);

	{
		std::cout << lec1 << std:: endl;
		std::cout << lec2 << std::endl;

		lec2.study();

		std::cout << lec1 << std::endl;
		std::cout << lec2 << std::endl;
	}

	delete std1;
	delete std1;
	delete std1;

	delete teacher2;
	delete teacher1;
}