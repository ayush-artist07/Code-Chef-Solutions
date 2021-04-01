//https://www.codechef.com/problems/RACINGEN

//Basic Mathematics

#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll x,r,m,req=0;
		cin>>x>>r>>m;
		
		r=r*60;
		m=m*60;
		
		req+=min(x,r);
		r-=min(x,r);
		req+=2*r;
		
		if(req<=m)
		cout<<"Yes\n";
		
		else
		cout<<"No\n";
	}
	
	return 0;
}
