//To find the sum in circular array : MAX SUM OF NORMAL SUBARRAY - MIN SUM OF NORMAL SUBARRAY 

#include<bits/stdc++.h>
using namespace std;
int normalMaxSum(int arr[],int n)
{
    int res=arr[0],maxfinding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxfinding=max(maxfinding+arr[i],arr[i]);
        res=max(maxfinding,res);
    }
    return res;
}
int overalMax(int arr[],int n)
{
    int Max_normal=normalMaxSum(arr,n);
    if(Max_normal<0)
      return Max_normal;
    int arr_sum=0;
    //invert the array
    for(int i=0;i<n;i++)
    {
       arr_sum+=arr[i];
       arr[i] = -arr[i];
    }  
    int Max_circular = arr_sum + normalMaxSum(arr,n);
    int res = max(Max_normal,Max_circular);
    return res;
}
int main()
{
    int arr[]={5,-2,3,4};
    int res=overalMax(arr,4);
    cout<<res;
    return 0;
}