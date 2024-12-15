#include <bits/stdc++.h>
using namespace std;
int main(){
    string str, alpha="abcdefghijklmnopqrstuvwxyz";
    getline(cin, str);
    int a[26], len = str.size();
    memset(a, 0, sizeof(a));
    for(int i=0; i<len; i++){
        if(isalpha(str[i])) a[tolower(str[i]) - 'a']++;
    }
    for(int i=0; i<26; i++){
        if(a[i] != 0) cout << alpha[i] << " -> " << a[i] << endl;
    }
    return 0;
}
