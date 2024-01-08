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
queue<int> Q;
map<int,bool> mp;

void dfs(int curr, int par){
    cout << curr << "\n";
    for(auto it: Adj[curr]){
        if (it != par){
            dfs(it,curr);
        }
    }
}

void bfs(){
    int curr = Q.front();
    Q.pop();
    mp[curr] = true;
    cout << curr << "\n";
    for(auto it: Adj[curr])
        Q.push(it);
    while(!Q.empty()){
        curr = Q.front();
        cout << curr << "\n";
        mp[curr] = true;
        Q.pop();
        for(auto it: Adj[curr]){
            if(!mp[it])
                Q.push(it);
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
    Q.push(1);
    // dfs(1,-1);
    bfs();
	return 0;
}

