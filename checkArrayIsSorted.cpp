#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
          return false;
    }
    return true;
}
int main()
{
    int arr[50],n;
    cout<<"Enter number of elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool r=isSorted(arr,n);
    cout<<r;
    return 0;
}