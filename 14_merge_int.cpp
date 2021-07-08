#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	vector<pair<int,int > >a;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x;
		cout<" ";
		cin>>y;
		a.push_back({x,y});
	}
/*	sort(a.begin(),a.end());
	stack<pair<int,int > > s;
	s.push({a[0].first,a[0].second});
	for(int i=1;i<n;i++)
	{
		int st2=a[i].first;
		int end2=a[i].second;
		int st1=s.top().first;
		int end1=s.top().second;
		if(end1<st2)
		{
			s.push({st2,end2});
		}
		else
		{
			s.pop();
			end1=max(end1,end2);
			s.push({st1,end1});
		}
	}
	while(!s.empty())
	{
		cout<<s.top().first<<" "<<s.top().second<<endl;
		s.pop();
	}*/
	int idx=0,i=1;
	for(i=1;i<n;i++)
	{
		if(a[idx].second>=a[i].first)
		{
			a[idx].first=min(a[idx].first,a[i].first);
			a[idx].second=max(a[idx].second,a[i].second);
		}
		else
		{
			idx++;
			a[idx].first=a[i].first;
			a[idx].second=a[i].second;
		}
	}
	for(i=0;i<=idx;i++)
		cout<<a[i].first<<" "<<a[i].second<<endl;
	return 0;
}
