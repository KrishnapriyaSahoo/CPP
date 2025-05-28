//Bubble sort
#include<stdio.h>
#include<iostream>
#include<stdbool.h>
using namespace std;
void swap(int* xp,int* yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
void bubblesort(int arr[],int n)
{
	int i,j;
	bool swapped;
	for(i=0;i<n-1;i++)
	{
		swapped=false;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
		break;
	}
}
void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	cout<<" "<<arr[i];
}
int main()
{
	int arr[]={64,34,25,12,22,11,90};
	int N=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,N);
	cout<<"Sorted array:\n";
	printArray(arr,N);
	return 0;
}
