// https://codeforces.com/contest/1931/problem/B

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
        ll mean = sm/n;
        // cout << mean << "\n";
        ll water = 0;
        bool flag = true;
        for(int i=0; i < n; i++){
            if (v[i]>=mean){
                water+=v[i]-mean;
            }
            else if (water >= (mean-v[i]) && v[i] < mean){
                water-=mean-v[i];
            }
            else{
                flag = false;
                break;
            }
            // cout << water << "\n";
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}