#include<iostream>
#define SIZE 4
using namespace std;
int top=-1,inp_array[SIZE];
void push();
void pop();
void show();
int main()
{
	int choice;
	while(1)
	{
		cout<<"Perform the operations on the stack:";
		cout<<"\n1.Push the element\n2.Pop the element\n3.Show the element\n4.End";
		cin>>choice;
		switch(choice)
		{
		case 1:
			push();
			break;
			case 2:
				pop();
				break;
				case 3:
					show();
					break;
					case 4:
						exit(0);
						break;
						default:
							printf("Enter a valid choice!!");
	}
}
}
void push()
{
	int x;
	if(top==SIZE-1)
	{
		cout<<"Stack Overflow!!";
	}
	else
	{
		cout<<"\nEnter the elements to be added onto the stack:";
		cin>>x;
		top=top+1;
		inp_array[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"Stack Underflow!!";
	}
	else
	{
		cout<<"\nPopped element:"<<inp_array[top];
		top=top-1;
	}
}
void show()
{
	if(top==-1)
	{
		cout<<"Stack Underflow!!";
	}
	else
	{
		cout<<"\nElements present in the stack are:";
		for(int i=top;i>=0;i--)
		cout<<inp_array[i];
	}
}
