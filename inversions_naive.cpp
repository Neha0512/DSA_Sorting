#include<bits/stdc++.h>
using namespace std;

int inversions(int arr1[], int n)
{
	int count=0;
	for(int i=0; i<(n-1); i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr1[i]>arr1[j] )
		{
			count++;
		}
		}
		
	}
	return count;
}

int main()
{
	int n=4;;
	int arr1[n]={2,5,11,8};
	cout<<inversions(arr1,n);
}
