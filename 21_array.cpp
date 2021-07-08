#include<bits/stdc++.h>
using namespace std;
bool subArray(int a[],int n)
{
	unordered_set<int > sumSet;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		cnt+=a[i];
		if(cnt==0||sumSet.find(cnt)!=sumSet.end())
			return true;
		sumSet.insert(cnt);
	}
	return false;
}
int main()
{
	int a[]={-3, 2, 3, 1, 6};
	int n=sizeof(a)/sizeof(a[0]);
	if(subArray(a,n))
		cout<<"SubArray Found:";
	else
		cout<<"SubArray Not Found:";
	return 0;
}
