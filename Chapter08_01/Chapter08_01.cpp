#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Friend
{
public: //access specigier (public, private, protected), ���� ������
	string name;
	string address;
	int age;
	double height;
	double weight;

	void print()	
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};


void print(const string& name, const string& address,
const int& age, const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}
int main()
{
	Friend jj{"Jack Jack","Uptown",2,12.4,23.2};		//�޸𸮸� �����ϵ��� ������ �ִ°��� instanciation!, jj�� class�� instance

	jj.print();	//jj��� ���簡 print()�� �ϴ� ��ó�� ����

	string name;
	string address;
	int age;
	double height;
	double weight;

	print(name, address, age, height, weight);

	//vector���
	vector<string> name_vec;
	vector<string> addr_vec;
	vector<int> age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;

	print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

	return 0;
}