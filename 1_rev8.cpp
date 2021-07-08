#include<bits/stdc++.h>
using namespace std;
/*void reverse(int a[],int n)
{
	for(int i=0,j=n-1;i<j;i++,j--)
		swap(a[i],a[j]);
		
}*/
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void reverseRecur(int a[],int i,int j)
{
	if(i>=j)
		return;
	swap(a[i],a[j]);
	return reverseRecur(a,i+1,j-1);
}
int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	printArray(a,n);
	reverse(a,a+n);
//	reverse(a,n);
	printArray(a,n);
	reverseRecur(a,0,n-1);
//	printArray(a,n);
//reverse(a,a+n);
	return 0;
}
