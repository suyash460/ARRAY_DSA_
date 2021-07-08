#include<bits/stdc++.h>
using namespace std;
void rightRotate(int a[],int j,int i)
{
	int tmp=a[i];
	for(int k=i;k>j;k--)
			a[k]=a[k-1];
		a[j]=tmp;
		
}
void reArrange(int a[],int n)
{
	int w=-1;
	for(int i=0;i<n;i++)
	{
		if(w>=0)
		{
			if((a[w]<0&&a[i]>=0)||(a[w]>=0&&a[i]<0))
			{
				rightRotate(a,w,i);
				if(i-w>=2)
					w+=2;
				else
					w=-1;
			}
		}
		if(w==-1)
		{
			if((a[i]>=0&&i%2==1)||(a[i]<0&&i%2==0))
				w=i;
		}
	}
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
}
int main()
{
	int a[]={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
	int n=sizeof(a)/sizeof(a[0]);
	printArray(a,n);
	reArrange(a,n);
	printArray(a,n);
	return 0;
}
