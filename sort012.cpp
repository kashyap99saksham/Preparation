#include<iostream>
using namespace std;
int main()
{
	int t,i,j,n,count0=0,count1=0,count2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]==0)
				count0++;
			if(arr[i]==1)
				count1++;				
		}
		count2 = n-count1-count0;
		for(i=0;i<count0;i++)
			cout<<0<<" ";
		for(i=0;i<count1;i++)
			cout<<1<<" ";
		for(i=0;i<count2;i++)
			cout<<2<<" ";
		cout<<endl;
	}
}
