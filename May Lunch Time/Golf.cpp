#include<iostream>
using namespace std;
#define ll long long int

bool checkForward(int pos,int steps)
{
	if(pos%steps==0)
	return true;
	
	return false;
}

bool checkBackward(int N,int x,int k)
{
		if(((N+1)-x)%k==0)
		return true;
	
	return false;
}

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll N,x,k;
		cin>>N>>x>>k;
		int flag=0;
		
		bool isForward=checkForward(x,k);
		
		bool isBackward=checkBackward(N,x,k);
		
		if(isForward==true || isBackward==true)
		cout<<"Yes"<<"\n";
		
		else
		cout<<"No"<<"\n";
	}
	
	return 0;
}
