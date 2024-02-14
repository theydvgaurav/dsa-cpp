// https://codeforces.com/contest/1931/problem/C
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
        ll n, sm=0; cin >> n;
        vi v;
        for(int i=0; i < n; i++){
            ll x; cin >> x;
            sm+=x;
            v.push_back(x);
        }
        ll x=1, y=1;
        for(int i=n-1; i > 0; i--){
            if(v[i]==v[i-1])
                y++;
            else
                break;
        }
        
        for(int i=0; i < n-1; i++){
            if(v[i]==v[i+1])
                x++;
            else
                break;
        }
        if (x==n || y==n){
            cout << 0 << "\n";
            continue;
        }
        // cout << x << " " << y << " xy\n";
        if(v[0]==v[n-1]){
            cout << n - y - x << "\n";
        }
        else{
            if(y >= x){
                cout << n - y << "\n";
            }
            else{
                cout << n - x << "\n";
            }
            
        }
        
    }
    return 0;
}