//Maximum difference where ar[j]-ar[i]  and j>i 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,10,5,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxx,res,j;
    maxx=arr[0];
    res=arr[1]-arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxx<arr[i])
        {
            maxx=arr[i];
            j=i;
        }
    }
    for(int i=0;i<j;i++)
    {
        res=max(res,maxx-arr[i]);
    }
    cout<<res;
    return 0;
}