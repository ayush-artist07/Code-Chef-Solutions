#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int N = 4,M = 2;
	int count = 0;
	
	for(int i=0;i < pow(2,M);i++){
		
		for(int j = 0;j < pow(2,M);j++){
			
			for(int k = 0;k< pow(2,M);k++){
				
				for(int l = 0;l< pow(2,M);l++){
					
				if( (i&j&k&l)== 0)
				count++;
				
				cout<<i<<" "<<j<<" "<<k<<" "<<(i&j&k&l)<<endl;
					
				}	
			}							
		}
	}
	
	cout<<count;
	
	return 0;
}
