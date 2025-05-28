#include<iostream>
#include<string.h>
using namespace std;
struct Employee{
	int id;
	string name;
	float salary;
};
int main()
{
	Employee e1;
	e1.id=1209;
	e1.name="Prakash";
	e1.salary=6500.54;
	Employee e2;
	e2.id=2387;
	e2.name="Biswajeet";
	e2.salary=3498.00;
	cout<<e1.id<<" "<<e1.name<<" "<<e1.salary<<endl;
	cout<<e2.id<<" "<<e2.name<<" "<<e2.salary<<endl;
	return 0;
}
