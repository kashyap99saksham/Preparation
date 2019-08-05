#include <iostream> 
using namespace std; 

void printLeaders(int arr[], int size) 
{ 
	int i,xx=0,k;
	int max_from_right = arr[size-1]; 
	int a[size];
	a[0] = max_from_right; 
	
	for (i = size-2,k=1; i >= 0; i--) 
	{ 
		if (max_from_right <= arr[i]) 
		{		 
			xx++;
			max_from_right = arr[i]; 
			a[k] = max_from_right; 
			k++;
		} 
	}
	for(i=xx;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<endl;
} 

int main() 
{ 
    int t;
	cin>>t;
	while(t--)
	{   
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    printLeaders(arr, n); 
	}
	return 0; 
}	 

