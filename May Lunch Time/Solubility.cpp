#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll currSolubility,currTempt,incSolubilityRate;
		cin>>currTempt>>currSolubility>>incSolubilityRate;
		
		cout<<(currSolubility+((100-currTempt)*incSolubilityRate))*10<<"\n";
	}
	
	return 0;
}
