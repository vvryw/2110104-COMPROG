#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map <string, vector<string>> m;
    cin >> n;
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str);
        string song = str.substr(0, str.find_first_of(','));
        string singer = str.substr(str.find_first_of(',')+2);
        m[song].push_back(singer);
    }
    string s;
    getline(cin, s);    
    string temp = "";
    vector<string> v;
    for(char c : s){
        if(c != ',') temp += c;
        else{
            if(temp.find_first_of(' ') == 0){
                string song = temp.substr(temp.find_first_of(' ')+1);
                v.push_back(song);
            }
            else v.push_back(temp);
            temp = "";
        }
    }
    string song = temp.substr(temp.find_first_of(' ')+1);
    v.push_back(song);


    for(auto i : v){
        cout << i << " -> ";
        if(m.find(i) == m.end()) cout << "Not found" << endl;
        else{
            for(auto j : m[i]){
                cout << j;
                auto itr = m[i].end(); itr--;
                if(j != *itr) cout << ", ";
            } 
            cout << endl;
        }
    }
    return 0;
}
