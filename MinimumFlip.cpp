#include<bits/stdc++.h>
using namespace std;
void MinFlips(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"From "<<i<<"to";
            }
            else  
              cout<<i<<"\n";
        }
        if(arr[n-1]!=arr[0])
        {
            cout<<n-1;
        }
    }
}
int main()
{
    int arr[]={1,1,0,0,0,1,0,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    MinFlips(arr,n);
    return 0;
}