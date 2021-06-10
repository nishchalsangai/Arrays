#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[],int n)
{
   int count=1;
   for(int i=1;i<n;i++)
   {
       if(arr[i]==arr[i-1])
       {
           count++;
       }
       else{
           cout<<"Frequency of "<<arr[i-1]<<" is "<<count<<"\n";
           count=1;
       }
   }
   if(n==1||arr[n-1]!=arr[n-2])
   {
       cout<<"Frequency of "<<arr[n-1]<<" is "<<count<<"\n";
   }
}
int main()
{
    int arr[]={1,2,2,3,3,4,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);
    return 0;
}