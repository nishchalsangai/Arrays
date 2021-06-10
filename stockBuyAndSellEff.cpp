#include<bits/stdc++.h>
using namespace std;
int maxProfit(int price[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(price[i]>price[i-1])
        {
            profit+=price[i]-price[i-1];
        }
    }
    return profit;
}
int main()
{
    int arr[]={1,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int profit=maxProfit(arr,n);
    cout<<"Maximum Profit is "<<profit;
    return 0;
}