#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<"After Left Rotating the array by one:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}