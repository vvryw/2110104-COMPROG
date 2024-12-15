// 08_​Map_​★★_​GenreTotalPlaytime 
#include <bits/stdc++.h>
using namespace std;

set <string> split(string s){
    set <string> SET;
    string temp = "";
    for(char c : s){
        if(c == ' '){
            SET.insert(temp);
            temp = "";
        }
        else temp+=c;
    }
    return SET;
}

int main(){
    map <string, set<string>> m;
    vector <string> vec;
    int n;
    cin >> n;
    while(n--){
        string id;
        cin >> id;
        string str;
        cin.ignore();
        getline(cin, str);
        set <string> temp_set = split(str);
        vec.push_back(id);
        m[id] = temp_set;
    }
    string id;
    cin >> id;
    set <string> temp = m[id];
    bool check = false;
    // for(auto &i : temp){
    //     cout << i << endl;
    //     for(auto &j : vec){
    //         if(j != id && m[j].find(i) != m[j].end()) {
    //             cout << ">> " << j << endl;
    //             m.erase(j);
    //             check = true;
    //         }
    //     }
    // }
    // if(!check) cout << ">> Not Found" << endl;

    for(auto &i : vec){
        if(i != id){
            for(auto s : m[i]){
                if(m[id].find(s) != m[id].end()){
                    cout << ">> " << i << endl;
                    check = true;
                    break;
                }
            }
        }
    }
    if(!check) cout << ">> Not Found" << endl;

    return 0;
}
