#include<bits/stdc++.h>
using namespace std;
void sOrt(int a[],int n)
{
	int l=0,r=n-1,mid=0;
	while(mid<=r)
	{
		if(a[mid]==0)
		{
			swap(a[l],a[mid]);
			l++;mid++;
		}
		else if(a[mid]==1)
			mid++;
		else
		{
			swap(a[mid],a[r]);
				r--;
		}
	}
}
int main()
{
	int a[]={0,1,2,2,0,0,2};
	int n=sizeof(a)/sizeof(a[0]);
	sOrt(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
