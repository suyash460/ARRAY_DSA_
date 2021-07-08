#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1,ans=0;
    while(i<=j)
    {
        if(a[i]==a[j])
        {
            i++;j--;
        }
        else if(a[i]<a[j])
        {
            i++;
            ans++;
            a[i]+=a[i-1];
        }
        else
    {
        j--;
        a[j]+=a[j+1];
        ans++;
    }
    }
    cout<<ans;
}
