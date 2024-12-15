#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    map <string, double> m;
    m["THB"] = 1;
    cin >> n;
    while(n--){
        string c;
        double mn;
        cin >> c >> mn;
        m[c] = mn;
    }
    double money;
    cin >> money;
    cin.ignore();
    string s;
    getline(cin, s);

    string temp="";
    vector <string> v;
    for(char c : s){
        if(c != ' ') temp += c;
        else {
            v.push_back(temp);
            temp = "";
        }
    }
    v.push_back(temp);
    // for(auto i : v) cout << i << ' '; // check vector element
    
    for(int i=0; i<v.size(); i++){
        if(i == 0) cout << money << ' ' << v[i];
        else{
            if(i == i-1) cout << " -> " << money << ' ' << v[i];
            else{
                if(v[i-1] == "THB") money = int(money/m[v[i]]);
                else if(v[i] == "THB") money = int(money*m[v[i-1]]);
                else money = int(money*m[v[i-1]]/m[v[i]]);
                cout << " -> " << int(money) << ' ' << v[i];
            }
        }
    }

    return 0;
}
