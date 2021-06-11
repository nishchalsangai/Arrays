#include<bits/stdc++.h>
using namespace std;
int lengthEvenOdd(int arr[],int n)
{
    int res=1;
    int count=1;
    for(int i=1;i<n;i++)
    { if((arr[i-1]%2==0&&arr[i]%2!=0)||(arr[i]%2==0&&arr[i-1]%2!=0))
       {
           count++;
       }
       else{
           res=max(count,res);
           count=1;
       }
    }
    res=max(count,res);
    return res;
}
int main()
{
    int arr[]={5,10,20,6,3,8};
    int res=lengthEvenOdd(arr,6);
    cout<<res;
    return 0;
}