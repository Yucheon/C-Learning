#include <iostream>
#include <string>
using namespace std;

class Something {//const ���
public:
	string s_value = "default";

	const string& getValue() const	//const ���
	{
		cout << "constversion" << endl;
		return s_value; 
	}		
	string& getValue()				//const �̻��
	{
		cout << "no version" << endl;
		return s_value; 
	}					
};

int main()
{
	Something something;
	something.getValue();		//no version

	const Something somthing2;	//constversion
	somthing2.getValue();

	return 0;
}