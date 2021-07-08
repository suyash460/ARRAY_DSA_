#include<bits/stdc++.h>
using namespace std;
void find3Numbers(int a[],int n,int sum)
{
	sort(a,a+n);
	for(int i=0;i<n-2;i++)
	{
		int j=i+1;
		int k=n-1;
		while(j<k)
		{
			if(a[i]+a[j]+a[k]==sum)
			{
				cout<<"Triplet is:"<<a[i]<<" "<<a[j]<<" "<<a[k];
				break;
			}
			else if(a[i]+a[j]+a[k]<sum)
				j++;
			else
				k--;
		}
		
	}
}
int main()
{

    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
    find3Numbers(A, arr_size, sum);
 
    return 0;
}
