#include<iostream>
using namespace std;
int main()
{
    int i,j,test,n,key,count=0,no;
    // cin>>test;
    // for (i = 0; i < test; i++)
    // {
        cout<<"no of elements\n";
        cin>>n;
        int arr[n];
        for (j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        cout<<"enter summing no\n";
        cin>>no;
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<n;y++)
            {
                if(x!=y)
                {
                    if((arr[x]+arr[y])==no)
                    {
                        count++;
                    }
                }
            }
        }
        if(count>0)
            cout<<"present";
        
    // }
}
