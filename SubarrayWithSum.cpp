#include<bits/stdc++.h>
using namespace std;
bool SubSum(int arr[],int sum,int n)
{
    int start=0;
    int subSum=arr[0];
    for(int i=1;i<n;i++)
    {
        while(subSum>sum&&start<i-1)
        {
            subSum -= arr[start];
            start++;
        }
        if(subSum==sum)
        {
            return true;
        }
        if(i<n)
         subSum +=arr[i];
    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,5,10,8,9},n,sum;
    cin>>sum;
    n=sizeof(arr)/sizeof(arr[0]);
    bool res=SubSum(arr,sum,n);
    if(res==true)
    {
        cout<<"Available";
    }
    else
     cout<<"Not Available";
    return 0; 
}