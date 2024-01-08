// https://codeforces.com/contest/1873/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
	fast_io;
    ll t; cin >> t;
	while(t--){
	   ll n,m;
	   cin >> n >> m;
	   string s;
	   cin >> s;
	   ll res = 0;
	   for(ll i=0; i < s.size(); i++){
	       if (s[i]=='B'){
	           res+=1;
	           i=i+m-1;
	       }
	   }
	   cout << res << "\n";
	}
	return 0;
}