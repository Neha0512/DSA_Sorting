// In-place and stable algorithm
// Used in practice for small arrays
// Time complexity - theta(n^2) : worst case, theta(n): best case, overall: O(n^2)

#include<bits/stdc++.h>
using namespace std;
int insertionSort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int key=arr[i];
		int j=i-1;	
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]= key;
	}
	for(int i=0; i<n ;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n=5;
	int arr[n]={4,7,5,3,8};
	return insertionSort(arr, n);
}
