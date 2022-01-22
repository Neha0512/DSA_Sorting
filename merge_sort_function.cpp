#include<bits/stdc++.h>
using namespace std;

int mergeFun(int arr[],int low, int high, int mid)
{
	int n1=mid-low+1;
	int n2=high-mid;
	int left[n1];
	int right[n2];
	for(int i=0; i<n1; i++)
	{
		left[i]=arr[low+i];
	}
	for(int i=0; i<n2; i++)
	{
		right[i]=arr[mid+1+i];
	}
	int i=0, j=0, k=1;
	while(i<n1 && j<n2){
	if(left[i]<=right[j])
	{
		arr[k++]=left[i++];
	}
	else{
		arr[k++]=right[j++];
	}
}
	while(i<n1)
	{
		arr[k++]=left[i++];
	}
	while(j<n2)
	{
		arr[k++]=right[j++];
}
}

int main()
{
	int n=9;
		
    int a[n]={10,15,20,40,8,11,15,22,25};
	int low=0;
	int mid=3;
	int high=8;
//	int arr[n]={1,3,6,9,12,2};
	mergeFun(a,low, high, mid);
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
