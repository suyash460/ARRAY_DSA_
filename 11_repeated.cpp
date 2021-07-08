#include<bits/stdc++.h>
using namespace std;
int repeated(int a[],int n)
{
	int sum1=(n-1)*n/2,sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];
	return (sum-sum1);
}
int repeated1(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[abs(a[i])]>0)
			a[abs(a[i])] = -a[abs(a[i])];
        else
           return abs(a[i]) ;
	
	}
}
int main()
{
	int a[]={1,1,3,2,4};
	int n=sizeof(a)/sizeof(a[0]);	
	cout<<"REpeated Number is:"<<repeated(a,n)<<endl;
	cout<<"REpeated Number is:"<<repeated1(a,n);
	return 0;
}
