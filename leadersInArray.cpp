#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[50],n,curr_leader,j=0;
   cin>>n;
   int temp[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   curr_leader=arr[n-1];
   
   temp[j]=curr_leader;
   for(int i=n-2;i>=0;i--)
   {
       if(arr[i]>curr_leader)
       {  j++;
          curr_leader=arr[i];
          temp[j]=curr_leader;
       }
   }
    for(int i=j;i>=0;i--)
   {
       cout<<temp[i]<<" ";
   }
   return 0;
}