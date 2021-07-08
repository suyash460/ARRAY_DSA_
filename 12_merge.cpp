#include<bits/stdc++.h>
using namespace std;
//1st
void mergeArray(int a[],int m,int b[],int n)
{
	for(int i=0;i<n;i++)
	{
		int tmp=a[m-1];
		if(b[i]<tmp)
		{
			int k=b[i];
			int j=m-2;
			while(j>=0 && k<=a[j])
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=k;
		//	b[i]=tmp;
			k=tmp;
			j=1;
			while(j<=n-1 && k>=b[j])
			{
				b[j-1]=b[j];
				j++;
			}
			b[j-1]=k;
		}
		else
			break;
	}
	sort(b,b+n);
}
//2nd
void merge(int a[],int m,int b[],int n)
{
	int i,j,last;
	for(i=n-1;i>=0;i--)
	{
		last=a[m-1];
		for(j=m-2;j>=0&&a[j]>b[i];j--)
		{
			a[j+1]=a[j];
		}
		if(j!=m-2||b[i]<last)
		{
			a[j+1]=b[i];
			b[i]=last;
		}
	}
}
//3rd
void mergeSort(int a[],int m,int b[],int n)
{
	int i=0,k=m-1,j=0;
	while(i<=k&&j<n)
	{
		if(a[i]<b[j])
			i++;
		else
			{
				swap(b[j],a[k]);
				j++;
				k--;
			}
	}
	sort(a,a+m);
	sort(b,b+n);
}
void printArray(int x[],int y)
{
	for(int i=0;i<y;i++)
		cout<<x[i]<<" ";
	cout<<endl;
}
int main()
{
	int a[]={1, 5, 9, 10, 15, 20};
	int m=sizeof(a)/sizeof(a[0]);
	int b[]={2, 3, 8, 13};
	int n=sizeof(b)/sizeof(b[0]);
	//mergeArray(a,m,b,n);
	//merge(a,m,b,n);
	mergeSort(a,m,b,n);
	printArray(a,m);
	printArray(b,n);
	return 0;
}
