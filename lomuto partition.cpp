// In this partitioning method, pivot is always taken as the last element
// Works in O(n) TC and O(1) aux. space

#include<bits/stdc++.h>
using namespace std;

int lomutoPart(int arr[], int l, int h)
{
	int pivot=arr[h];
	int i=l-1;
	for(int j=l; j<h-1; j++)
	{
		if(arr[i]>arr[j])
		{
			l++;
			swap(arr[i],arr[j]);
		}
	
	}
		swap(arr[i+1],arr[h]);
		return i+1;
}

int main()
{
	int n=5;
	int arr[n]={70,40,60,80,30};
	cout<<lomutoPart(arr,0 ,4);
}
