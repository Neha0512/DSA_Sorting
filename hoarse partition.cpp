// This takes O(1) aux space and run in O(1) time
// In this, the pivot element is taken to be the first element
// Hoarse is different from lomuto as in lomuto, we fix the position of pivot at its correct position(drawback of horase)

#include<bits/stdc++.h>
using namespace std;

int hoarsePart(int arr[], int l, int h)
{
	int pivot=arr[l];
	int i=l-1;
	int j=h+1;
	while(true)
	{
		do{
			i++;
		}
			while(arr[i]<pivot);
		do{
			j--;
		}
			while(arr[j]>pivot);
		if(i>=j)
		{
			return j;
		}
		swap(arr[i],arr[j]);
	}
}

int main()
{
	int n=8;
	int arr[n]={5,3,8,4,2,7,1,10};
	cout<<hoarsePart(arr,0,7);
}
