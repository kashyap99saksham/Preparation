#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		bool f = false;
		int i,n,sum=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0;i<n;i++)
			sum+=arr[i];
		int x=0;
		for(i=0;i<n;i++){
			sum-=arr[i];
			if(sum==x){
				f = true;
				cout<<i+1<<endl;
//				break;
			}	
			x+=arr[i];	
		}
		if(f==false)
			cout<<-1<<endl;
		cout<<endl;		
	}
}
