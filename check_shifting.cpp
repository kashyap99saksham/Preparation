#include<iostream>
using namespace std;
int main()
{
    int i,j,test,n,key,count=0,no;
    int arr[] = {6,7,8,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (j = 0; j < size; j++)
    {
        count++;
        if(arr[j]>arr[j+1])
        {
            break;
        }    
    }
    cout<<count;
}
