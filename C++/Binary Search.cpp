
		#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int h,int key)
{

	while(l<=h)
	{
		int mid=l+(h-l)/2;
		if(arr[mid]<key)
		l=mid+1;
		else if(arr[mid]==key)
		{
		 return mid;
		}
		else h=mid-1;

	}
	return -1;
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter element to search"<<endl;
	int key;
	cin>>key;
	cout<<binarysearch(arr,0,n-1,5);
	
	
/*	int l=0;
	int h=n-1;
	int mid=l+(h-l)/2;
	while(l<=h)
	{
		if(arr[mid]<key)
		{
			l=mid+1;
		}
		else if(arr[mid]==key)
		{
		cout<<"element found at position "<<mid;
		break;
		}
		else 
		{
			h=mid-1;
		}
		mid=l+(h-l)/2;
		
		if(l>h)
		cout<<"element not found";*/
	}
