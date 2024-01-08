// https://codeforces.com/contest/1873/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t; cin >> t;
	while(t--){
	   ll n; cin >> n;
	   vector<ll> v;
	   ll min = INT_MAX;
	   ll idx = 0;
	   for(ll i =0; i < n; i++){
	       ll x; cin >> x;
	       if(x < min){
	         min = x;
	         idx = i;
	       }
	       v.push_back(x);
	   }
	   ll res = 1;
      for(ll i =0; i < n; i++){
            if(i==idx){
                res*=v[i]+1;
            }
            else{
                res*=v[i];
            }
                
       }
       cout << res <<"\n";
	}
	return 0;
}