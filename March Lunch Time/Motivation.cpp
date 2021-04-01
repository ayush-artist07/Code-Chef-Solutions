//Question Link - https://www.codechef.com/problems/IMDB

//Solution is simply based upon finding max or sorting the elements in non increasing
//order

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	
	ll n,x;
	multiset<int,greater<int>> s;
	
	while(t--)
	{
		cin>>n>>x;
		ll temp1,temp2,ans;
	
	for(int i=0;i<n;i++)
	{
		
		cin>>temp1>>temp2;
		
		if(temp1<=x)
		s.insert(temp2);
		
	}
		
		cout<<*(s.begin())<<"\n";
		s.clear();
	}

return 0;
	
}
