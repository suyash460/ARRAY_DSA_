#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1, 5, 10, 20, 40, 80, 80};
	int n1=sizeof(a)/sizeof(a[0]);
	int b[] = {6, 7, 20, 80, 80, 100 };
	int n2=sizeof(b)/sizeof(b[0]);
	int c[]={3, 4, 15, 20, 30, 70, 80, 80, 120};
	int n3=sizeof(c)/sizeof(c[0]);
	int i=0,j=0,k=0;
	//no duplicates
	/*while(i<n1&&j<n2&&k<n3)
	{
		if(a[i]==b[j]&&b[j]==c[k])
		{
			cout<<a[i]<<" ";
			i++;j++;k++;
		}
		else if(a[i]<b[j])
			i++;
		else if(b[j]<c[k])
			j++;
		else
			k++;
	}*/
	//for duplicates
	int prev1,prev2,prev3;
	prev1=prev2=prev3=INT_MIN;
	while(i<n1&&j<n2&&k<n3)
	{
		while(a[i]==prev1&&i<n1)
			i++;
		while(b[j]==prev2&&j<n2)
			j++;
		while(c[k]==prev3&&k<n3)
			k++;
		if(a[i]==b[j]&&b[j]==c[k])
		{
			cout<<a[i]<<" ";
			prev1=a[i];
			prev2=b[j];
			prev3=c[k];
			i++;j++;k++;
		}
		else if(a[i]<b[j])
		{
			prev1=a[i];
			i++;
		}
		else if(b[j]<c[k])
		{
				prev2=b[j];
		
			j++;
		}
		else
		{
			prev3=c[k];
			k++;
		}
	}
}
