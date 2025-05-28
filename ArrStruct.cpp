#include<iostream>
using namespace std;
struct Point{
	int x,y;
};
int main()
{
	struct Point arr[10];
	arr[0].x=10;
	arr[0].y=20;
	arr[1].x=11;
	arr[1].y=21;
	cout<<arr[0].x<<" "<<arr[1].x<<" "<<arr[0].y<<" "<<arr[1].y;
	return 0;
}
