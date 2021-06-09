#include<iostream>
#include<limits.h>
using namespace std;
#define ll long long int

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		ll N,M;
		cin>>N>>M;
		
		ll num,destination;
		ll arr[N];
		
		for(int i=0;i<N;i++){
			
			cin>>num;
			arr[i] = num;			
		}
		
		for(int i = 0;i<M;i++){
			
			cin>>destination;
			
			if(destination == 1 || arr[destination -1] == 1 || arr[destination - 1] == 2)
			cout<<0;
			
			else {
				
				ll stepL= INT_MAX;
				ll stepR = INT_MAX; 

				ll i = destination - 2;
				ll j =  destination;
		
				ll count = 1;
	
				while(i >= 0){
		
					if(arr[i] == 1){
					stepL = count;
					break;
					}
	 			i--,count++;	
			}
	
			count = 1;
	
			while(j < N){
		
				if(arr[j] == 2){
				stepR = count;
				break;
				}
				j++,count++;
			}		
			
			min(stepL,stepR) == INT_MAX ?cout<<-1<<" " : cout<<min(stepL,stepR)<<" ";	
			}
			
		}
	}
	
	return 0;
}
