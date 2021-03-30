// Question Link
//https://www.codechef.com/LTIME94A/problems/NFS

//focus on the data type and root properties that it should not be negative

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		double u,v,a,s,ansV=0.0;
		cin>>u>>v>>a>>s;
		
		if(u>v)
		{
		ansV=((u*u)- (2*a*s));
		 
		if(ansV<=(v*v))
		cout<<"Yes";
		
		else
		cout<<"No\n";	
		}
		
		else
		cout<<"Yes\n";		
		
	}
	return 0;
}
