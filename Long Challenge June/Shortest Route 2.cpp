#include "bits/stdc++.h"
using namespace std;
#define maxi 3E5+9

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		int N,M;
		cin>>N>>M;
		
		int arr[N],ans[N],destination[M];
		
		for(int i=0;i<N;i++){
			
			cin>>arr[i];				
		}
		
		for(int i=0;i<N;i++)
		{
			if(i==0){
        			ans[i]=0;
       			}
       			
				else if(arr[i]!=0){
        			ans[i]=0;
       			}
       			
       			else{
        			ans[i]=maxi; 
 		       } 
		}
		
		int right = -1;
		for(int i = 0;i<N;i++){
			
			if(arr[i] == 1)
				right = i;	
			
						
			if(right != -1){
				
				if(arr[i]==0)
					ans[i] = min(ans[i],i-right);					
			}			
		}
		
		int left = -1;
		for(int i = N-1;i>=0;i++){
			
			if(arr[i] == 2)
				left = i;	
			
						
			if(left != -1){
				
				if(arr[i]==0)
					ans[i] = min(ans[i],left - i);					
			}
		}
		
		for(int i = 0;i<M;i++){	
		
			int j = destination[i];
				
        	if(ans[j]!=maxi){
            cout<<ans[j]<<" ";
        		}
        	else{
            cout<<-1<<" ";
        	}
        	
			
			}
		
		cout<<endl;			
	}	
		
		return 0;
}
