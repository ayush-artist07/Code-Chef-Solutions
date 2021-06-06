#include<iostream>
using namespace std;
#define ll long long int


int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		ll D,d,P,Q;
		cin>>D>>d>>P>>Q;
		
		ll full = (D - d) / d;
		
		ll full_Q = ((full * (full + 1))/2) * d * Q;
		
		ll rem_Q = ((D - d) % d ) * Q * (full + 1);
		
		ll total_Q = full_Q + rem_Q;		
		
		ll total_P = D * P;
		
		cout<< (total_Q + total_P)<<"\n";	
		
	}
	
	return 0;
}
