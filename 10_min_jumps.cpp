#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	//int a[]={1,4,3,2,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	if(n<=1)
		cout<<"Not Possible";
	else if(a[0]==0)
		cout<<"Invalid input";
	else
	{
		cout<<"Starting pos:"<<"0 ";
		int max_Reach=a[0],jump=1,step=a[0];
		for(int i=1;i<n;i++)
		{
			if(i==n-1)
			{
				cout<<"\nNo of Jumps are:"<<jump;
				break;
			}
			max_Reach=max(max_Reach,i+a[i]);
			step--;
			if(step==0)
			{
				jump++;
				if(i>=max_Reach)
				{
					cout<<"Not Possible:";
					break;
					}
				step=max_Reach-i;
				cout<<"\nStarting pos:"<<i;
			}
		}
	}
	return 0;
}
