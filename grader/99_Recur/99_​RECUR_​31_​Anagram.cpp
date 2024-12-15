#include <bits/stdc++.h>
using namespace std;
string input;
vector <bool> visited;
set <string> ans;

void permu(int step, int size, string s){
    if(step == size){
        ans.insert(s);
        return;
    }

    for(int i=0; i<size; i++){
        if(!visited[i]){
            visited[i] = true;
            permu(step+1, size, s+input[i]);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> input;
    int size = input.size();
    visited.resize(size, false);
    permu(0, size, "");

    for(auto e : ans) cout << e << ' ';

    return 0;
}
