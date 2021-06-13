#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        
        int a, b, A, B;
        
        cin>>a>>b>>A>>B;
        
        int total = (A/a) + (B/b);
        
        cout<<total<<"\n";
        
    }
	
	
	
	return 0;
}

