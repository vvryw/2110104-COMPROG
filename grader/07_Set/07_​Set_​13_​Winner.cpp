#include <bits/stdc++.h>
using namespace std;
int main(){
    set <string> fc, lost;
    string s1, s2;
    while(cin >> s1){
        cin >> s2;
        fc.insert(s1);
        lost.insert(s2);
    }
    bool check = true;
    for(auto &i : fc){
        if(lost.count(i) == 0) { cout << i << " "; check = false; }
    }
    if(check) cout << "None";
    return 0;
}
