#include<bits/stdc++.h>
using namespace std;
int maxOne(int arr[],int n)
{
    int res=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
         count=0;
        else if(arr[i]==1)
        {   
            count++;
            res=max(count,res);
        } 
    }
    return res;
}
int main()
{
   int arr[]={1,0,1,1,1,0,1,1,0,0};
   int n= sizeof(arr)/sizeof(arr[0]);
   int res=maxOne(arr,n);
   cout<<res;
   return 0;
}
