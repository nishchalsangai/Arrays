#include<bits/stdc++.h>
using namespace std;
int majel(int nums[],int n)
{
   int count = 0;
        int majEle ;
        for(int i=0; i<n; i++)
        {
            if(count == 0)
            {
                majEle = nums[i];
            }
            if(nums[i]==majEle)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return majEle;
}
int main()
{
    int arr[]={2,1,1,1,1,1,3,4,4};
    int res=majel(arr,9);
    cout<<res;
    return 0;
}