#include<bits/stdc++.h>
using namespace std;

int mergeFun(int arr[], int low, int mid, int high)
{
	while(low<mid && mid<high)
	{
		if(arr[low]<=arr[mid+1])
		{
			cout<<arr[low]<<" ";
			low++;
		}
		else
		{
			cout<<arr[mid+1]<<" ";
			mid++;
		}
		while(low<mid)
		{
			cout<<arr[low]<<" ";
			low++;
		}
		while(mid+1<=high)
		{ 
			cout<<arr[mid+1]<<" ";
			mid++;
		}
	}
}

int main()
{
	int n=6;
	int low=0;
	int mid=3;
	int high=5;
	int arr[n]={3,5,7,8,2,11};
	cout<<mergeFun(arr,low,mid,high);
}
