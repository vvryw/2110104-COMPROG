#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, string> m1;
    map <string, string> m2;
    int n, m;
    cin >> n;
    while(n--){
        string real, nick;
        cin >> real >> nick;
        m1.insert({real, nick});
        m2.insert({nick, real});
    }
    cin >> m;
    while(m--){
        string input;
        cin >> input;
        if(m1.find(input) != m1.end()) cout << m1[input] << endl;
        else if(m2.find(input) != m2.end()) cout << m2[input] << endl;
        else cout << "Not found\n";
    }
    return 0;
}
