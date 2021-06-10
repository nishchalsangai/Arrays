#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n)
{
    int low=0,high=n-1,temp;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
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
    reverseArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}