#include"bits/stdc++.h"
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll N;
		cin>>N;
		
		vector<pair<ll,ll>> X;
		vector<pair<ll,ll>> Y;
		
		multiset<ll> x;
		multiset<ll> y;
		
		for(ll i=0;i<N;i++){
			
			ll p,q;
			cin>>p>>q;
			
			X.push_back({p,q});
			Y.push_back({q,p});
			
			x.insert(p);
			y.insert(q);
		}
		
		sort(X.begin(),X.end());
		sort(Y.begin(),Y.end());
		
		ll heigth_of_x = 0;
		ll height_of_y = 0;
		
		ll max_height = 0;
		ll min_height = LONG_MAX;
		
		ll area = LONG_MAX;
		
		for(ll i = 0;i<N-1;++i){
			
			max_height = max(max_height,X[i].second);
			min_height = min(min_height,X[i].second);
			heigth_of_x = max_height - min_height;
			
			auto it = y.find(X[i].second);
			y.erase(it);
			
			height_of_y = *y.rbegin() - *y.begin();
			ll final_area = (X[i].first - X[0].first)*heigth_of_x + 
			(X[N-1].first - X[i+1].first)*height_of_y;
			
			area = min(area,final_area);
		}
		
		ll w1 = 0;
		ll w2 = 0;
		ll w1Max = 0;
		ll w1Min = LONG_MAX;
		
		for(ll i = 0;i<N-1;i++){
			
			w1Max=max(w1Max,Y[i].second);
			w1Min = min(w1Min,Y[i].second);
			
			w1 = w1Max - w1Min;
			auto it = x.find(Y[i].second);
			x.erase(it);
			
			w2 = *x.rbegin() - *x.begin();
			ll final_area = (Y[i].first - Y[0].first)*w1 + (Y[N-1].first - Y[i+1].first)*w2;
			
			area = min(area,final_area);
			
		}
		if(area == LONG_MAX)
		area = 0;
		
		cout<<area<<endl;
		}
		return 0;
		}
