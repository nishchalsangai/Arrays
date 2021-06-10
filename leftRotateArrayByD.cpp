/*In this program I will code all the three methods that can help you solve this   
call this function number of times you want to rotate using for loop (TC:-O(nd))
void leftRotateEverySingleTime(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
it's better than calling every single time (TC:-O(n+d),SC:-O(d))
void leftRotateArrayMethodII(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }

}
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