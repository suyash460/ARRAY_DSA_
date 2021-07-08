#include<bits/stdc++.h>
using namespace std;
//order not maintained
void reArrange(int a[],int n)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		if(a[l]<0 && a[r]>0)
		{
			l++;r--;
		}
		else if(a[l]>0 && a[r]<0)
		{
			swap(a[l],a[r]);
			l++;r--;
		}
		else if(a[l]<0 && a[r]<0)
			l++;
		else
			r--;
	}
}
//Maintaining order
void reArrangeOrder(int a[],int n)
{
	int k,j;
	for(int i=1;i<n;i++)
	{
		if(a[i]<0)
		{
		
		k=a[i];
		j=i-1;
			while(j>=0 && a[j]>0)
			{
				a[j+1]=a[j];
				j--;
			}
		a[j+1]=k;
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
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
     printArray(arr, n);
    //reArrange(arr, n);
    reArrangeOrder(arr,n);
    printArray(arr, n);
    return 0;
}
