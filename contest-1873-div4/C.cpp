// https://codeforces.com/contest/1873/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll solve(ll x){
    return min(x,abs(11-x));
}

int main() {
    ll t; cin >> t;
	while(t--){
	   ll n=10, m=10;
	   ll res = 0;
	   for(ll i=0;i<n;i++){
	       for(ll j=0;j<m;j++){
	           char x; cin >>x;
	           if(x=='X'){
	               res+= min(solve(i+1),solve(j+1));
	           }
	       }
	   }
	   cout << res <<"\n";
	}
	return 0;
}