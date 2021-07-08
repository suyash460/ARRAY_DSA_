#include<bits/stdc++.h>
using namespace std;
int min(int a[],int n,int m)
{
	int min=INT_MAX;
	if(n<m)
		return -1;
	sort(a,a+n);
	for(int i=0;i+m-1<n;i++)
	{
		if(a[m+i-1]-a[i]<min)
			min=a[m+i-1]-a[i];
	}
	return min;
}
int main()
{
	int a[]={12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50};
	int n=sizeof(a)/sizeof(a[0]);
	int m=7;
	cout<<"Mnimum Diff Between Max AND Min is:"<<min(a,n,m);
	return 0;
}

