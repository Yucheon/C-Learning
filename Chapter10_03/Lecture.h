#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;		

	Teacher *teacher;	
	std::vector<Student*> student;		//�ּҷ� �Ѱ���

public:
	Lecture(const std::string name_in)
		:m_name(name_in)
	{}

	void assignTeacher(Teacher * const teacher_input)	//�ּҸ� �Ѱ��ְ� �ֱ� ������ Teacher�� const�� �����ϰ�, & -> * (�����ͷ� ����)
	{
		teacher = teacher_input;
	}
	void registerStudent(Student* const student_input)
	{
		student.push_back(student_input);
	}

	void study()
	{
		std::cout << m_name << "      Study" << std::endl;

		for (auto &element : student)
		{
			element->setIntel(element->getIntel() + 1);
		}
	}

	friend std::ostream& operator <<(std::ostream& out, const Lecture &lecture)
	{
		out << lecture.teacher << std::endl;

		for (auto element : lecture.student)
		{
			out << *element << std::endl;
		}
		return out;
	}
};