//Naive Partition algorithm is stable but comparatively slower than other partition algo.  
// Time Complexity is 0(n) and takes 0(n) extra space

#include<bits/stdc++.h>
using namespace std;

void naivePart(int arr[], int l, int h, int p)
{
	int temp[h-l+1];
	int index=0;
	for(int i=l; i<=h; i++)
	{
		if(arr[i]<=arr[p] && i!=p)
		{
			temp[index]=arr[i];
			index++;
		}
	}
	temp[index++]=arr[p];
	
	for(int i=l; i<=h; i++)
	{
		if(arr[i]>arr[p])
		{
			temp[index]=arr[i];
			index++;
		}
	}
	
	for(int i=l; i<=h; i++)
	{
			arr[i]=temp[i-l];
				cout<<arr[i]<<" ";
	}
}

int main()
{
	int n=7;
	int arr[n]={5,13,6,9,12,11,8};
	naivePart(arr,0,n-1, 3);
//	for(int i=0; i<n;i++)

}
