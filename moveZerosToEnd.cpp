#include<bits/stdc++.h>
using namespace std;
void moveZeroToEnd(int arr[],int n)
{
    int count=0;   //take count of non zero elemennts
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[50],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    moveZeroToEnd(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}