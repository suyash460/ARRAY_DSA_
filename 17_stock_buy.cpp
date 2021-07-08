#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={7,1,5,3,6,4};
		int n=sizeof(a)/sizeof(a[0]);
	int maxProfit= INT_MIN,cost=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cost=min(cost,a[i]);
            int profit=a[i]-cost;
            maxProfit=max(profit,maxProfit);
        }
     cout<<"Max Profit:"<<maxProfit;
}
