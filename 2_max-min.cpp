#include<bits/stdc++.h>
using namespace std;
//No of Comparisons are: 1+2*(n-2)
void maxmin(int a[],int n)
{
	int max,min;
	if(n==1)
	{
		max=a[0];
		min=a[0];
	}
	else
	{
		if(a[0]>a[1])
		{
			min=a[1];
			max=a[0];
		}
		else
		{
			min=a[0];
			max=a[1];
		}
		for(int i=2;i<n;i++)
		{
			if(a[i]<min)
				min=a[i];
			if(a[i]>max)
				max=a[i];
		}
	}
	cout<<"Max Element :"<<max<<endl;
	cout<<"Min Element :"<<min<<endl;
}
//No of Comparisons are 3*n/2-2
void MaxMin(int a[],int n)
{
	int max,min,i;
	if(n%2==0)
	{
		if(a[0]<a[1])
		{
			max=a[1];
			min=a[0];
		}
		else
		{
			max=a[0];
			min=a[1];
		}
		i=2;
	}
	else
	{
		max=a[0];
		min=a[0];
		i=1;
	}
	while(i<n-1)
	{
		if(a[i]<a[i+1])
		{
			if(max<a[i+1])
				max=a[i+1];
			if(a[i]<min)
				min=a[i];
		}
		else
		{
			if(a[i]>max)
				max=a[i];
			if(min<a[i+1])
				min=a[i+1];
		}
		i+=2;
	}
		cout<<"Max Element :"<<max<<endl;
	cout<<"Min Element :"<<min<<endl;
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int a[]={12,1,4,3,6};
	int n=sizeof(a)/sizeof(a[0]);
	printArray(a,n);
	maxmin(a,n);
	MaxMin(a,n);
	return 0;
}
