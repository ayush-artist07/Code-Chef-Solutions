#include <bits/stdc++.h>
using namespace std;
#define maxi 3E5+5
 
int main(){
    int t;
    cin>>t;
    while(t--){
        
           	int n,m; 
    		cin>>n>>m;
    		int a[n],b[m];
    		int i,j;
    
		for (i=0;i<n;i++){
        		cin>>a[i];
   			}
   			 
    	for(i=0;i<m;i++){
        		cin>>b[i];
    		}
    		
    		int ans[n]; 		
    		
    		
    	for(i=0;i<n;i++){
    			
       			if(i==0){
        			ans[i]=0;
       			}
       			
				else if(a[i]!=0){
        			ans[i]=0;
       			}
       			
       			else{
        			ans[i]=maxi; 
 		       } 
   			}
   			
   			int low=-1,high=-1;
   			
   	for(i=0;i<n;i++){
       if(a[i]==1){
           high=i;
       }
       if(high!=-1){
           if(a[i]==0){
            ans[i]=min(ans[i],i-high);
           }
       }
   }
   
   	
    for(i=n-1;i>=0;i--){
        if(a[i]==2){
            low=i;  
        }
        if(low!=-1){
            if(a[i]==0){ 
                ans[i] =min(ans[i],low-i);
            }
        }
    }
    for(i=0;i<m;i++){
        j=b[i]-1;
        if(ans[j]!=maxi){
            cout<<ans[j]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        
    }
   cout<<endl;
}
    }
