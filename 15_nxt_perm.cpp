#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,3,4},i,idx=-1;;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=n-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			idx=i;
			break;
		}
	}
	if(idx==-1)
		reverse(a,a+n);
	else
	{
		int tmp=idx-1,prev=idx;
		for(i=idx+1;i<n;i++)
		{
			if(a[tmp]<a[i]&&a[i]<=a[prev])
				prev=i;
				
		}
		swap(a[tmp],a[prev]);
		reverse(a+idx,a+n);
	}
	//next_permutation(a,a+n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;

	
}

