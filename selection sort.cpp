#include<bits/stdc++.h>
using namespace std;

int selectionSort(int arr[], int n)
{
	for(int i=0; i<n;i++)
	{
		int minInd=i;
		for(int j=i+1;j<n;j++)
		{
		if(arr[j]<arr[minInd])
		{
			minInd=j;
					break;
		}
	
	}
		swap(arr[minInd], arr[i]);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"Elements:";
	for(int k=0; k<n; k++)
	{
		
		cin>>arr[k];
		}
	selectionSort(arr,n);
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	}

