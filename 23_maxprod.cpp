#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={6, -3, -10, 0, 2};
	int n=sizeof(a)/sizeof(a[0]);
	int prev_max=a[0],prev_min=a[0],ans=a[0],curr_max=a[0],curr_min;
	for(int i=1;i<n;i++)
	{
		curr_max=max(prev_max*a[i],prev_min*a[i]);
		curr_max=max(a[i],curr_max);
		curr_min=min(prev_max*a[i],prev_min*a[i]);
		curr_min=min(curr_min,a[i]);
		ans=max(ans,curr_max);
		prev_max=curr_max;
		prev_min=curr_min;
	}
	cout<<"Max Prod SubArray:"<<ans;
	return 0;
}
