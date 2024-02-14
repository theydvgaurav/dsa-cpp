// https://codeforces.com/contest/1931/problem/A

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vi vector<ll>
#define vs vector<string>
 
int main() {
    fast_io;
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n<=28)
            cout << "aa" << char(n+94) << "\n";
        else if (n>=29 && n <= 53)
            cout << "a" << char(n+69) << "z\n";
        else
            cout << char(n+44) << "zz\n";
    }
    return 0;
}