#include <iostream>
#include <fstream>       //���� ���
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x=0.0, double y=0.0, double z=0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	friend std::ostream& operator << (std::ostream& out, const Point& point)
	{
		out << "(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";

		return out;
	}

	friend std::istream& operator >> (std::istream& in, Point& point)
	{
		in >>  point.m_x >> point.m_y  >> point.m_z ;

		return in;
	}
};


int main()
{

	ofstream of("out.txt");		//����� ������ �̸�

	Point p1;
	cin >>p1;

	cout << p1 << endl;
	of << p1 << endl;

	of.close();

	return 0;
}