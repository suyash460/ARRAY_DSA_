#include<bits/stdc++.h>
using namespace std;
int getMedian(int a[],int b[],int n)
{
	int i=0,j=0;
	int m1=-1,m2=-1;
	for(int cnt=0;cnt<=n;cnt++ )
	{
		if(i==n)
		{
			m1=m2;
			m2=b[0];
			break;
		}
		else if(j==n)
		{
			m1=m2;
			m2=a[0];
			break;
		}
		if(a[i]<=b[j])
		{
			m1=m2;
			m2=a[i];
			i++;
		}
		else 
		{
			m1=m2;
			m2=b[j];
			j++;
		}
	}
	return (m1+m2)/2;
}
int main()
{
    int ar1[] = {1, 2, 3, 6};
    int ar2[] = {4, 6, 8, 10};
 
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    if (n1 == n2)
        cout << "Median is "
             << getMedian(ar1, ar2, n1) ;
    else
        cout << "Doesn't work for arrays"
             << " of unequal size" ;
    getchar();
    return 0;
}

