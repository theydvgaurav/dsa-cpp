#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
	ll n; cin >> n;
	ll s = (n*(n+1))/2;
	for(ll i=0; i<n-1; i++){
	    ll x; cin >> x;
	    s -=x;
	}
	cout << s;
	
	return 0;
}