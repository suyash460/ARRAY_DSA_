#include<bits/stdc++.h>
using namespace std;
int maxSubArray(int a[],int n)
{
	int max=INT_MIN,curr=0,s=0,i,e=0,start=0;
	for(int i=0;i<n;i++)
	{
		curr+=a[i];
		if(max<curr)
		{
		
			max=curr;
			s=start;
			e=i;
			
		}
		if(curr<0)
		{
		
			curr=0;
			start=i+1;
		}
	}
	cout<<"Starting Index:"<<s<<endl;
	cout<<"Ending Index:"<<e<<endl;
	return max;
}
int main()
{
	int a[]={-1,-2,-3,-4};
	int n=sizeof(a)/sizeof(a[0]);
	//printArray(a,n);
	cout<<"Max Sub Array Sum is:"<<maxSubArray(a,n);
	return 0;
}
