#include<bits/stdc++.h>
using namespace std;

void intersection(int arr[],int arr2[], int n, int m)
{
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(i>0 && arr[i]==arr[i-1])
		{
			i++; 
			continue;
		}
	if(arr[i]<arr2[j])
	{
		i++;
	}
	else if(arr[i]>arr2[j])
	{
		j++;
	}
	else
	{
		cout<<arr[i]<< " ";
		i++;
		j++;
	}
	}
}

int main()
{
	int n=5;
	int m=4;
	int arr[n]={2,3,3,4,4};
	int arr2[m] = { 3,4,4,5};
	intersection(arr, arr2 , n , m);
}
