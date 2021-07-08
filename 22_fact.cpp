#include<bits/stdc++.h>
using namespace std;
#define Max 500
int multiply(int res[],int x,int res_size)
{
	int carry=0;
	for(int i=0;i<res_size;i++)
	{
		int prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		res[res_size]=carry%10;
		carry/=10;
		res_size++;
	}
	return res_size;
}
void factorial(int n)
{
	int res[Max],res_size=1;
	res[0]=1;
	for(int x=2;x<=n;x++)
		res_size=multiply(res,x,res_size);
	for(int i=res_size-1;i>=0;i--)
		cout<<res[i];
}
int main()
{
	factorial(100);
	return 0;
}
