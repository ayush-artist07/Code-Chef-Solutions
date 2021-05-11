#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define M 100000007

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		
		ll x=2;
		ll y=n-1;
		ll temp=1;
		
		// The solution of the problem can be simple obtained by pow(2,n-1) but the
		//value obtained will be very large and can't be accumulated by any of the 
		//data type as n varies from 1 to 10^5 so in order to use modulo value
		// we have simplified it and than stored it as below
		
		//How to use modulo in power evaluation
		
		while(y>0)
		{
			if(y%2==1)
			temp=(temp*x)%M;
			
			x=(x*x)%M;
			
			y=y/2;
		}
		
		cout<<temp<<"\n";	
	}
	
	return 0;
}
