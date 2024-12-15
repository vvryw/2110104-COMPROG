#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <tuple<char,int,string>> vec;
    string s;
    while(cin >> s){
        if(s == "q") break;
        else{
            string g;
            cin >> g;
            if(g.size() == 2){
                vec.push_back(make_tuple(g[0], 1, s));
            }
            else{
                vec.push_back(make_tuple(g[0], 0, s));
            }
        }
    }
    string t;
    while(cin >> t){
        for(auto &e : vec){
            // cout << get<2>(e) << endl;
            if(get<2>(e) == t){
                if(get<0>(e) != 'A'){
                    if(get<1>(e) == 1){
                        get<0>(e)--;
                        get<1>(e) = 0;
                    }
                    else if(get<1>(e) == 0){
                        if(get<0>(e) == 'F') get<0>(e) = 'D';
                        else get<1>(e) = 1;
                    }
                }
            }
            // break;
        }
    }
    // sort(vec.begin(), vec.end());
    for(auto &e : vec){
        cout << get<2>(e) << ' ' << get<0>(e);
        if(get<1>(e) == 1) cout << '+';
        cout << endl;
    }
}
