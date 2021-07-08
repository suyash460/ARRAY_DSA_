#include<bits/stdc++.h>
using namespace std;
int maxSumArray(int a[],int n)
{
	int maxsum=INT_MIN,currsum=0,start=0,end=0,s=0;
	for(int i=0;i<n;i++)
	{
		currsum=a[i]+currsum;
		if(currsum>maxsum)
		{
			maxsum=currsum;
			start=s;
			end=i;
		}
		if(currsum<0)
		{
			currsum=0;
			s=i+1;
		}
	}
	cout<<"Star:"<<start<<" "<<"End:" <<end<<endl;
	return maxsum;
}
int main()
{
	int a[]={1,2,3,-2,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Max Subarray Sum is:"<<maxSumArray(a,n);
	return 0;
}
	
