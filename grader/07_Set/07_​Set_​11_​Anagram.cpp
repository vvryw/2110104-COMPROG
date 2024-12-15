#include <bits/stdc++.h>
using namespace std;
int main() {
    multiset<char> m1, m2;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for(char c : s1){
        if(isalpha(c)) m1.insert(tolower(c));
    }

    for(char c : s2){
        if(isalpha(c)) m2.insert(tolower(c));
    }

    if(m1 == m2) cout << "YES";
    else cout << "NO";
    
}
