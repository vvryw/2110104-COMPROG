#include <bits/stdc++.h>
using namespace std;

set <int> split(string s){
    string temp = "";
    set <int> out;
    for(char c : s){
        if(c != ' ') temp += c;
        else{
            out.insert(stoi(temp));
            temp = "";
        }
    } 
    out.insert(stoi(temp));
    return out;
}

int main(){
    set <int> U, I, D;
    vector <set <int>> all;
    string str;
    while(getline(cin, str)) all.push_back(split(str));

    I = D = all[0];

    for(auto i : all){
        for(auto e : i) U.insert(e);
    }

    for(auto i : all){
        set <int> temp;
        for(auto e : i){
            if(I.count(e) && i.count(e)) temp.insert(e);
        }
        I = temp;
    }
    
    int len = all.size();
    for(int i=1; i<len; i++){
        for(auto e : D){
            if(all[i].count(e)) D.erase(e);
        }
    }

    cout << "U: ";
    if(U.empty()) cout << "empty set\n";
    else{
        for(auto i : U) cout << i << " ";
        cout << endl;
    }

    cout << "I: ";
    if(I.empty()) cout << "empty set\n";
    else{
        for(auto i : I) cout << i << " ";
        cout << endl;
    }

    cout << "D: ";
    if(D.empty()) cout << "empty set\n";
    else{
        for(auto i : D) cout << i << " ";
        cout << endl;
    }

    return 0;
}
