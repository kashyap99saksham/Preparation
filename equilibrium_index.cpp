#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,j,k;
		cin>>n;
		bool f = false;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			int sum_l=0,sum_r=0;
			for(j=0;j<i;j++)
			{
				sum_l+= arr[j];
			}
			for(k=i+1;k<n;k++)
			{
				
				sum_r+= arr[k];
			}
			if(sum_l==sum_r)
			{
				f = true;
				cout<<i;
				break;
			}
		}
		if(k==false)
			cout<<-1;
	}
}
