#include<iostream>
#include<string.h>
using namespace std;
struct Point{
	int num;
	string name;
};
int main()
{
	struct Point p={1452,"Activa"};
	struct Point q={1729,"Suzuki"};
	struct Point r={2816,"Honda"};
	struct Point*p1=&p;
	struct Point*p2=&q;
	struct Point*p3=&r;
	cout<<p1->num<<" "<<p1->name<<endl;
	cout<<p2->num<<" "<<p2->name<<endl;
	cout<<p3->num<<" "<<p3->name<<endl;
	return 0;
}
