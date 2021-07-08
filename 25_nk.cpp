#include<bits/stdc++.h>
using namespace std;
void count(int a[],int n,int k)
{
	unordered_map<int, int> freq;
	int x=n/k;
	for(int i=0;i<n;i++)
	{
		freq[a[i]]++;
	}
	for(auto it: freq)
	{
		if(it.second>x)
			cout<<it.first<<" ";
	}
}
int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 5, 
                  4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
      
    count(arr, n, k);
  
    return 0;
}
