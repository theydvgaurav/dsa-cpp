#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vi vector<ll>
#define vs vector<string>

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout); 
    #endif
} 

int n;
vector<vector<int>> Adj;
map<int,bool> mp;
// using map to mark visited nodes
// as here I don't have the parent of a node

void bfs(int start){
    queue<int> Q;
    Q.push(start);
    mp[start] = true;
    while(!Q.empty()){
        int curr = Q.front();
        cout << curr << "\n";
        Q.pop();
        for(auto it: Adj[curr]){
            if(!mp[it]){
                mp[it] = true;
                Q.push(it);
            }
        }
            
    }
}

int main() {
    init_code();
    cin >> n;
    Adj.resize(n+1);
    
    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        Adj[u].push_back(v);
        Adj[v].push_back(u);
    }
    bfs(1);
    return 0;
}