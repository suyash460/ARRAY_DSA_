#include<bits/stdc++.h>
using namespace std;
int isSubset(int a[],int m,int b[],int n)
{
	set<int> s;
	for(int i=0;i<m;i++)
	{
		s.insert(a[i]);
	}

	for(int i=0;i<n;i++)
	{
		if(s.find(b[i])==s.end())
			return 0;
	}
	return 1;
}
int main()
{
	int arr1[] = { 11, 1, 13, 21, 3,3, 7 };
    int arr2[] = { 11, 3, 7, 21 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    if (isSubset(arr1, m, arr2, n))
        cout << "arr2[] is subset of arr1[] "
             << "\n";
    else
        cout << "arr2[] is not a subset of arr1[] "
             << "\n";
    return 0;

}
