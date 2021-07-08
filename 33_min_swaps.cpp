#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {2, 7, 9, 5, 8, 7, 4};
	int cnt=0,k=5;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		if(a[i]<=k)
			cnt++;
	}
	int bad=0,ans;
	for(int i=0;i<cnt;i++)
	{
		if(a[i]>k)
			++bad;
	}
	ans=bad;
	for(int i=0,j=cnt;j<n;i++,j++)
	{
		if(a[i]>k)
			--bad;
		if(a[j]>k)
			++bad;
		ans=min(ans,bad);
	}
	cout<<"Minimum Swaps:"<<ans;
}
