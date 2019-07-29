#include <iostream>
using namespace std;

int main() {
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<abs((a[i]*(a[i]-3))/2)<<"\n";
    }
	return 0;
}
