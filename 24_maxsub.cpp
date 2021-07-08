#include<bits/stdc++.h>
using namespace std;
//nlogn
int maxSub(int a[],int n)
{
	sort(a,a+n);
	int cnt=1,maxCount=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1]-1)
		{
			cnt++;
		}
		else if(a[i]==a[i+1])
			continue;
		else
			cnt=1;
		maxCount=max(cnt,maxCount);
	}
	return maxCount;
}
//o(n)
int maxSubCons(int a[],int n)
{
	int ans=0;
	set<int> s;
	for(int i=0;i<n;i++)
		s.insert(a[i]);
	for(int i=0;i<n;i++)
	{
		if(s.find(a[i]-1)==s.end())
		{
			int j=a[i];
			while(s.find(j)!=s.end())
				j++;
			ans=max(ans,j-a[i]);
		}
	}
	return ans;
}
int main()
{
	int a[]={1,2,3,4,5,5,6,6,9};
	int n=sizeof(a)/sizeof(a[0]);
	//cout<<"Maximum Consecutive Subsequence is:"<<maxSub(a,n);
	cout<<"Maximum Consecutive Subsequence is:"<<maxSubCons(a,n);
	return 0;
}
