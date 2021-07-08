#include<bits/stdc++.h>
using namespace std;
//Expected Time complexity is nlogk
int kthMin(int a[],int n,int k)
{
	priority_queue <int> pq;
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
		if(pq.size()>k)
			pq.pop();
	}
	return pq.top();
}
//time complexity is nlogn
int kthMin1(int a[],int n,int k)
{
	sort(a,a+n);
	return a[k-1];
}
//Expected Time complexity is nlogk
int kthMax(int a[],int n,int k)
{
	priority_queue <int, vector<int>, greater<int> > pq;
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
		if(pq.size()>k)
			pq.pop();
		
	}
	return pq.top();
}
//time complexity is nlogn
int kthMax1(int a[],int n,int k)
{
	sort(a,a+n);
	return a[n-k];
}
int main()
{
	int a[]={12,4,1,5,0,7};
	int k=3;
	int n=sizeof(a)/sizeof(a[0]);
//	cout<<"Kth smallest Number is:"<<kthMin(a,n,k)<<endl;
//	cout<<"Kth smallest Number is:"<<kthMin1(a,n,k)<<endl;
	cout<<"Kth Maximum Number is:"<<kthMax(a,n,k)<<endl;
	cout<<"Kth Maximum Number is:"<<kthMax1(a,n,k)<<endl;
	return 0;
}
