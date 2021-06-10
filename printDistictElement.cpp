#include<bits/stdc++.h>
using namespace std;
int printDistinctElement(int arr[],int n)
{
   int res=1;
   for(int i=1;i<n;i++)
   {
       if(arr[i-1]!=arr[i])
       {
           arr[res]=arr[i];
           res++;
       }
   }
   return res;
}
int main()
{
    int arr[]={1,2,2,3,3,4,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=printDistinctElement(arr,n);
    for(int i=0;i<res;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}