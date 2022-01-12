#include<bits/stdc++.h>
using namespace std;

int unionArr(int a[],int b[], int m, int n)
{	
	 int i=0,j=0;
    while(i<m && j<n){
	        if(i>0 && a[i-1]==a[i]){
			i++;
		continue;
		}
        if(j>0 && b[j-1]==b[j])
		{j++;
		continue;
		}
	if(a[i]<b[j])
	{cout<<a[i]<<" ";
	i++;
	}
        else if(a[i]>b[j])
		{cout<<b[j]<<" ";
		j++;
		}
	        else{
			cout<<a[i]<<" ";
			i++;
			j++;
			}
    }
        while(i<m)
		{
		if(i==0||a[i]!=a[i-1])
		cout<<a[i]<<" ";
		i++;
		}
        while(j<n)
		{
		if(j==0||b[j]!=b[j-1])
		cout<<b[j]<<" ";
		j++;
		}
}

int main()
{
	int n=4;
	int m=5;
	int arr[n]={2,3,3,4};
	int arr2[m]={4,6,7,7,8};
	cout<<unionArr(arr, arr2, n,m);
}
