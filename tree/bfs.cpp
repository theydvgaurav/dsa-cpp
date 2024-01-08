#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> Adj;
queue<int> Q;
map<int,bool> mp;
// using map to mark visited nodes
// as here I don't have the parent of a node

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
    bfs();
	return 0;
}

