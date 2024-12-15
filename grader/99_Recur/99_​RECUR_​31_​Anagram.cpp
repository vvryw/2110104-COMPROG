#include <bits/stdc++.h>
using namespace std;

string s;
set <string> ans;

int checked(int arr[], string now){
    if(now.size() == s.size()) ans.insert(now);
    
    for(int i=0; i<s.size(); i++){
        if(arr[i]) continue;
        arr[i] = 1;
        checked(arr, now + s[i]);
        arr[i] = 0;
    }
    return 0;
}

int main(){
    cin >> s;
    int arr[s.size()];
    memset(arr, 0, sizeof(arr));
    string now = "";
    checked(arr, now);
    for(auto i : ans) cout << i << ' ';
    return 0;
}
