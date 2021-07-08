#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int b[],int m,int n)
{
	int i=0,j=0;
	sort(a,a+m);
	sort(b,b+n);
	cout<<"Intersection Of List is:";
	while(i<m && j<n)
	{
		if(a[i]==b[j])
		{
	
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		else if(a[i]<b[j])
			i++;
		else 
			j++;
	}
}
void Union(int a[],int b[],int m,int n)
{
	int i=0,j=0;
		sort(a,a+m);
	sort(b,b+n);
	cout<<"Union Of List is:";
	while(i<m && j<n)
	{
		if(a[i]==b[j])
		{
	
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		else if(a[i]<b[j])
		{
			cout<<a[i]<<" ";
			i++;
		}
		else 
		{
		
		cout<<b[j]<<" ";
			j++;
		}
	}
	if(i==m)
	{
		while(j<n)
		{
			cout<<b[j]<<" ";
			j++;
		}
	}
	else
	{
		while(i<m)
		{
			cout<<a[i]<<" ";
			i++;
		}
	}
	cout<<endl;
}
int main()
{
	int a[]={85, 25, 1 ,32, 54, 6};
	int m=sizeof(a)/sizeof(a[0]);
	int b[]={ 2,32,85 };
	int n=sizeof(b)/sizeof(b[0]);
	Union(a,b,m,n);
	intersection(a,b,m,n);
	return 0;
}
