#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
	int n=sizeof(a)/sizeof(a[0]);
	int l=14,h=20;
	int i=0,j=n-1,k=0;
	while(k<=j)
	{
		if(a[k]<l)
		{
			swap(a[i],a[k]);
			i++,k++;
		}
		else if(a[k]>h)
		{
			swap(a[k],a[j]);
			j--;
		}
		else 
			k++;
	
	
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
