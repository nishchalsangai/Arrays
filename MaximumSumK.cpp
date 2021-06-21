#include<bits/stdc++.h>
using namespace std;
void maxSumK(int arr[],int k,int n)
{  int max_sum = 0;
   for(int i=0;i<k;i++)
   {
      max_sum += arr[i];
   }
   int curr_sum=max_sum;
   for(int i=k;i<n;i++)
   {
      
       curr_sum += arr[i]-arr[i-k];
       curr_sum = max(curr_sum,max_sum);
   }
   cout<<"Maximum sum is = "<<curr_sum;
}
int main()
{
    int arr[]={1,2,4,100,-3,200},n,k;
    cin>>k;
    n=sizeof(arr)/sizeof(arr[0]);
    maxSumK(arr,k,n);
    return 0;
}