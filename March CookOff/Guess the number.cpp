/*
Question--
Chef has a secret integer. The only information you have is that it has an 
odd number of factors and that it lies between 1 and 10^6 inclusive.

You have been challenged by Chef to find his number. You may make up to 2,000 guesses (queries). Whenever you guess Chef's number, 
he only tells you if you guessed correctly or not. Can you find Chef's number?

*/

/*
The solution to this problem is based on fact that perfect square of a  number has
odd number of factors always
ex. 2*2=4 factors of 4=1,2,4
3*3=9 factors of 9=1,3,9
4*4=16 factors of 16=1,2,4,8,16
*/

/*Since we are allowed to make 2000 guesses but the range 1 to 1000000 strictly lies
within 1000's square and can be guessed in 1000 attempts at most

As 1000*1000=1000000
*/ 

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		for(int i=1;i<=1000;i++)
		{
			cout<<(i*i)<<endl;
			int ans;
			
			cin>>ans;
			if(ans==1)
			break;
		}
				
	}
	return 0;
}
