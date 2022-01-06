// Time complexity of bubble sort is O(n^2)
// Bubble sort is a stable algo as it gives the output in the order of the input.


#include<bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[], int n)
{
	for(int i=0; i<n; i++)
	for(int j=0; j<n-i-1; j++)
	if(arr[j]>arr[j+1])
	{
		swap(arr[j], arr[j+1]);
	}
}

int main()
{
	int arr[]={7,3,20,15};
	int n=4;
	bubbleSort(arr,n);
	for(int i=0; i<4; i++)
	{
		cout<<arr[i]<<" ";
	}
}

//  OPTIMIZED SOLUTION
/*
int bubbleSort(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
	swapped=false;
	for(int j=0; j<n-i-1; j++)
	{
	if(arr[j]>arr[j+1])
	{
		swap(arr[j], arr[j+1]);
		swapped = true;
	}
   }
	if(swapped==false)
	break;
}
}

*/

