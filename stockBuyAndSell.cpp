#include<bits/stdc++.h>
using namespace std;
int ProfitStockBuyAndSell(int price[],int start,int end)
{
    if(start>=end)
      return 0;
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(price[j]>price[i])
            {
                int currProfit = price[j]-price[i]+ProfitStockBuyAndSell(price,j+1,end)+ProfitStockBuyAndSell(price,start,i-1);
                profit=max(profit,currProfit);
            }
        }
    }  
    return profit;
}

int main()
{
    int arr[]={1,3,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int profit=ProfitStockBuyAndSell(arr,0,n-1);
    cout<<"Maximum profit you can get is "<<profit;
    return 0;
}