#include<bits/stdc++.h>
using namespace std;
void swap1(int a[],int i,int j,int d)
{
	for(int k=0;k<d;k++)
	{
		int tmp=a[i+k];
		a[i+k]=a[j+k];
		a[k+j]=tmp;
	}
}
	                                                               
//one by one
void leftRotate(int a[],int n)
{
	int tmp=a[n-1];
	for(int i=n-1;i>0;i--)
		a[i]=a[i-1];
	a[0]=tmp;
}
//reversal algorithm
void leftRotate1(int a[],int n,int d)
{
	reverse(a,a+d);
	reverse(a+d,a+n);
	reverse(a,a+n);
}
//block swap algorithm
void leftRotate2(int a[],int d,int n)
{
	if(d==n || d==0)
		return;
	if(n-d==d)
	{
		swap1(a,0,n-d,d);
		return;
	 } 
	 else if(d<n-d)
	 {
	 	swap1(a,0,n-d,d);
	 	leftRotate2(a,d,n-d);
	 }
	 else
	 {
	 	swap1(a,0,d,n-d);
	 	leftRotate2(a-d+n,2*d-n,d);
	 }
}
int main()
{
	int a[]={1,2,3,4,5};
	int d=1;
	int n=sizeof(a)/sizeof(a[0]);
	leftRotate(a,n);
//	leftRotate1(a,n,d);
	//leftRotate2(a,d,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
