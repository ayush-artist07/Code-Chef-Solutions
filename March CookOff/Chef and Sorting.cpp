/*
https://www.codechef.com/problems/CHEFSORT
*/

//SOLUTION link-https://www.youtube.com/watch?v=tJltyC2hUxo&list=PLQXZIFwMtjoyG62-RUlcpyYR18mIlL-c-&index=6

#include<iostream>
using namespace std;
#define ll long long int

void solve()
{
	ll n;
		cin>>n;
		
		int arr[n]={0};
		
		for(int i=0;i<n;i++)
			cin>>arr[i];	
		
		int count=0;
		
		for(int i=1;i<n;i++)
		{
			if(arr[i-1]>arr[i])
			count++;
		}
		
		int k=n/2;
		
		if(count<=k)
		{
			cout<<count<<"\n";
			
			for(int i=1;i<n;i++)
			{
				if(arr[i-1]>arr[i])
				cout<<"2 "<<i<<" "<<(arr[i-1]-arr[i])<<"\n";		
			}
			
			return;
		}
		
		int num=((1ll<<30))-1;
		
		for(int i=0;i<n;i++)
		{
			arr[i]^=num;
		}
		
		count=0;
		
		for(int i=1;i<n;i++)
		{
			if(arr[i-1]>arr[i])
			count++;
		}
		
			cout<<count+1<<"\n";
			cout<<"3 "<<n<<" "<<num<<"\n";
			
			for(int i=1;i<n;i++)
			{
				if(arr[i-1]>arr[i])
				cout<<"2 "<<i<<" "<<arr[i-1]-arr[i]<<"\n";		
			}
		
}
int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		solve();
		}
	
	return 0;
}
