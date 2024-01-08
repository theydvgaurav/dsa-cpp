#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> Adj;

void dfs(int curr, int par){
    cout << curr << "\n";
    for(auto it: Adj[curr]){
    	// no need to maintain a map, as I have the 
    	// parent of a node and there would be no 
    	// cycle in a tree
        if (it != par){  
            dfs(it,curr);
        }
    }
}

int main() {
    cin >> n;
	Adj.resize(n+1);
	
	for(int i=0; i<n-1; i++){
	    int u, v;
	    cin >> u >> v;
	    Adj[u].push_back(v);
	    Adj[v].push_back(u);
	}
	dfs(1,-1);

	return 0;
}