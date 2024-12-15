#include <bits/stdc++.h>
using namespace std;
int N, start, dist;
map <int, vector<int>> adj;
set <vector<int>> ans;

void dfs(int u, vector<int> path, int mx){
    vector<bool> visited(mx+1, false);
    visited[u] = true;
    path.push_back(u);
    
    if(u == dist) {
        ans.insert(path);
        return;
    }

    for(auto i : adj[u]){
        if(!visited[i]) dfs(i, path, mx);
    }
}

int main(){
    int mx = -1e9;
    cin >> N >> start >> dist;
    for(int i=0; i<N; i++){
        int u, v;
        cin >> u >> v;
        if(mx < v) mx = v;
        adj[u].push_back(v);
    }

    dfs(start, {}, mx);

    if(ans.empty()) cout << "no";
    else{
        for(auto vec : ans){
            for(auto i : vec) {
                if(i != *(vec.end()-1)) cout << i << " -> ";
                else cout << i;
            }
            cout << endl;
        }
    }

    return 0;
}
