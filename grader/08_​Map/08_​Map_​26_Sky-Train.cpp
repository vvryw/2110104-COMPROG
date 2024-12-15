#include <bits/stdc++.h>
using namespace std;

int main(){
    map <string, set<string>> m;
    string pos;
    while(cin >> pos){
        string des;
        cin >> des;
        if(des != "") m[pos].insert(des);
    }    
    set <string> ans, temp, S1, S2;
    ans = m[pos];
    ans.insert(pos);
    temp = ans;

    for(auto &kv : m){
        for(auto &e : temp){
            if(kv.second.find(e) != kv.second.end()){
                ans.insert(kv.first);
                for(auto &K : m){
                    if(K.second.find(kv.first) != K.second.end() && e == pos){
                        ans.insert(K.first);
                    }
                }

                for(auto &e : kv.second) ans.insert(e);
            }
        }
    }

    for(auto &e : temp){
        for(auto &i : m[e]){
            ans.insert(i);
        }
    }
    
    for (auto &e : ans) cout << e << endl;

    return 0;
}
