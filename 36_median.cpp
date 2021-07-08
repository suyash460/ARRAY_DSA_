#include<bits/stdc++.h>
using namespace std;
void getMedian(int a[],int b[],int m,int n)
{
	int m1=-1,m2=-1,i=0,j=0;
	float x;
	if((m+n)%2==1)
	{
		for(int cnt=0;cnt<=(m+n)/2;cnt++)
		{
			if(i!=m&&j!=n)
			{
				m1=a[i]>b[j]?b[j++]:a[i++];
			}
			else if(i<m)
				m1=a[i++];
			else
				m1=b[j++];
		}
		cout<<"Median is:"<<m1;
	}
	else
	{
		for(int cnt=0;cnt<=(m+n)/2;cnt++)
		{
			m2=m1;
			if(i!=m&&j!=n)
			{
				m1=a[i]>b[j]?b[j++]:a[i++];
			}
			else if(i<m)
				m1=a[i++];
			else
				m1=b[j++];
		}
		x=(m1+m2)/2.0;
		cout<<"Median is:"<<x;
	}
	
}
int main()
{
    int ar1[] = {1};
    int ar2[] = {1,6,5};
 
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
     getMedian(ar1, ar2, n1, n2);
    return 0;
}
