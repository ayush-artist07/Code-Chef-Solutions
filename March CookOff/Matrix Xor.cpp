/*
Chef has a tasty ingredient - an integer K. He defines a tasty matrix A with N rows
 (numbered 1 through N) and M columns (numbered 1 through M) as Ai,j=K+i+j 
 for each valid i,j.

Currently, Chef is busy in the kitchen making this tasty matrix.
 Help him find the bitwise XOR of all elements of this matrix.
*/

/*
Solution based upon XOR properties
i) A ^ A = 0;
ii) A ^ 0 = A;

And on observing the matrix that there are some index are even no. of times
some odd we will conside only odd ones and do XOR of them and traversing once for the
first column and than last row will evaluate the ans for us;
*/

#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,m,k;
		cin>>n>>m>>k;
		int ans=0;
		
		//for first column
		for(ll i=1;i<=n;i++)
		{
			if(min(i,m)%2==1)
			ans^=(k+i+1);	
		}
		
		//for last row
		for(ll j=2;j<=m;j++)
		{
			if(min(n,m-j+1)%2==1)
			ans^=(k+n+j);
		}
		
		cout<<ans;
	}
	return 0;
}
