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

int n,m;
vector<vector<int>> Adj;
map<int,bool> mp;
vector<vector<int>> path;
// using map to mark visited nodes
// as here I don't have the parent of a node

void bfs(int start, int end){
    queue<int> Q;
    Q.push(start);
    mp[start] = true;
    while(!Q.empty()){
        int curr = Q.front();
        Q.pop();
        for(auto it: Adj[curr]){
            path[curr].push_back(it);
            if(!mp[it]){
                mp[it] = true;
                if(it==end)
                    return;
                Q.push(it);
            }
        }
            
    }
}

int main() {
    init_code();
    cin >> n >> m;
    path.resize(n+1);
    Adj.resize(n+1);
    
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        Adj[u].push_back(v);
        Adj[v].push_back(u);
    }
    bfs(1,5);
    // for(int i=1; i< path.size(); i++){
    for(auto itr: path[5])
            cout << itr << "\n"; 
    // }
    return 0;
}