#include<iostream>
using namespace std;
int main()
{
    int i,j,test,n,key,count=0;
    cin>>test;
    for (i = 0; i < test; i++)
    {
        cin>>n;
        int arr[n];
        for (j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        cin>>key;
        for(int z=0;z<n;z++)
        {
            if(arr[z]==key)
            {
                count++;   
                cout<<z;
            }
        }   
        if(count==0)
            cout<<-1;
    }
   
}
