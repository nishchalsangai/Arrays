#include<bits/stdc++.h>
using namespace std;
int rainWater(int arr[],int n)
{
   int res=0,Lmax[n],Rmax[n];
   Lmax[0]=arr[0];
   Rmax[n-1]=arr[n-1];
   //Compute Lmax
   for(int i=1;i<n;i++)
   {
     Lmax[i]=max(Lmax[i-1],arr[i]);
   }
   //Compute Rmax
   for(int i=n-1;i>=0;i--)
   {
       Rmax[i]=max(Rmax[i+1],arr[i]);
   }
   for(int i=1;i<n-1;i++)
   {
       res+=(min(Lmax[i],Rmax[i])-arr[i]);
   }
    return res;  
}
int main()
{
    int arr[]={3,0,1,2,5};
   int n=sizeof(arr)/sizeof(arr[0]);
    int res=rainWater(arr,n);
    cout<<res;
    return 0;
}