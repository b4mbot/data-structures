
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"enter number of elements : "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int max=arr[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(sum>max)
		max=sum;
		if(sum<0)
		sum=0;
	}
	cout<<" the maximum sum subarray is : "<< max;
	return 0;
}

