#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int n)
{
   int res=arr[0];
   int maxS=arr[0];
   for(int i=1;i<n;i++)
   {
       maxS=max(maxS+arr[i],arr[i]);
       res=max(maxS,res);
   }
   return res;
}
int main()
{
   int arr[]={-3,8,-2,4,-5,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   int res= maxSum(arr,n);
   cout<<res;
   return 0;
}