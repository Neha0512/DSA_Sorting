#include<bits/stdc++.h>
using namespace std;

int mergeArr(int arr1[], int arr2[], int n, int m)
{
	int i=0;
	int j=0;
	while(i<n && j<m)
	{
	if(arr1[i]<=arr2[j])
	{
		cout<<arr1[i]<<" ";
		i++;
	}
	else{
		cout<<arr2[j]<<" ";
		j++;
	}
}

	while(i<n)
	{
		cout<<arr1[i]<<" ";
		i++;
	}
	while(j<m)
	{
		cout<<arr2[j]<<" ";
		j++;
	}
}

int main()
{
	int n=4;
	int m=5;
	int arr1[n]={3,5,6,6};
	int arr2[m]={5,7,8,8,9};
	return mergeArr(arr1, arr2, n ,m);
	
}
