/*
You are given a positive integer K and a sequence A1,A2,…,AN. Initially, each element of this sequence is 0 or 1; your goal is to make all elements equal to 0.

In order to do that, you may perform the following operation any number of times:

Choose a subarray (a contiguous subsequence) with length K, i.e. choose two indices L and R such that 1=L=R=N and R-L+1=K.
Choose one element of that subarray and change it to 0, i.e. choose an index P such that L=P=R and change AP to 0.
The cost of this operation is the sum of this subarray AL+AL+1+…+AR before AP is changed.
Find the minimum total cost (sum of costs of individual operations) of making all elements of A equal to 0
*/

/*
Solution is based upon sliding window and certain observations 
like we will find a window k having minimum 1s and to convert this 
all 1s we will sum of n natural number formula and other remaining ones 
can be added up in minimum that is at cost of 1
*/


#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		
		ll arr[n]={0};
		int total_ones=0;
		
		//input of binary array and count total ones in the array
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
			if(arr[i]==1)
			total_ones++;			
		}
		
		//make a window of size k and take sum
		ll sum=0;
		for(int i=0;i<k;i++)
		sum+=arr[i];
		
		//sum all the windows of size k and find the window with min sum
		ll minimum_ones=sum;
		for(int i=0,j=k;j<n;j++,i++)
		{
			sum=(sum-arr[i]+arr[j]);
			minimum_ones=min(sum,minimum_ones);
		}
		
		//final ans based upon observation
		ll ans=(minimum_ones*(minimum_ones+1)/2)+total_ones-minimum_ones;
		
		cout<<ans<<"\n";	
	}
	return 0;
}
