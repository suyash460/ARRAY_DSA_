#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n=sizeof(a)/sizeof(a[0]);
	int cnt=0,leftmax=0,rightmax=0;
/*	for(int i=1;i<n-1;i++)
	{
		int max1=*max_element(a,a+i);
		int max2=*max_element(a+i+1,a+n);
		//cout<<max1<<" "<<max2<<endl;
		int x=min(max1,max2);
		if(x>=a[i])
	
			cnt+=x-a[i];
	}*/
	int l=0,h=n-1;
	while(l<=h)
	{
		if(a[l]<a[h])
		{
			if(a[l]>leftmax)
				leftmax=a[l];
			else
				cnt+=leftmax-a[l];
			l++;
		}
		else
		{
			if(a[h]>rightmax)
				rightmax=a[h];
			else
				cnt+=rightmax-a[h];
			h--;
		}
	}
		cout<<" "<<cnt;
	return 0;
}
