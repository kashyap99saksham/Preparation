#include<iostream>
using namespace std;
// int rotate(int);
int main()
{
    int i,n,size,temp=0;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>size;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin>>arr[j];            
        }
            temp = arr[size-1];
        for(int z=size-1;z>=0;z--)
        {
            arr[z+1] = arr[z];
        }        
        arr[0] = temp;
        for(int x=0;x<size;x++)
        {
            cout<<arr[x];
        }
    }
    
    
}
