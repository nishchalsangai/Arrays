#include<bits/stdc++.h>
using namespace std;
void Nbonacci(int arr[],int n,int m)
{
    arr[n-1]=1;
    arr[n]=1;
    for(int i=n+1;i<m;i++)
    {
        arr[i]=2*arr[i-1] - arr[i-n-1];
    }
}
int main()
{   int n,m;
    cin>>n>>m;
    int arr[m] = {0};
    Nbonacci(arr,n,m);
    cout<<"\nThe "<<n<<" "<<" bonacci series will be\n";
    for(int i=0;i<m;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
