/*In this program I will code all the three methods that can help you solve this   
 */

#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotateBydTimes(int arr[],int n,int d)
{
    //we wil use reversal algorithim
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
   int arr[50],n,temp,d; //d is number of times you want to left rotate the array
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(d>n)
    {
        d=d%n;
    }
    leftRotateBydTimes(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}