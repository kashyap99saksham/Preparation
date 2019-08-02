#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++)
    {
        for(int z=0;z<n-j-1;z++)
        {
            if(arr[z]>arr[z+1])
            {
               temp = arr[z+1];
               arr[z+1] = arr[z];
               arr[z] = temp; 
            }
        }
    }
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i];
    }
    
}
