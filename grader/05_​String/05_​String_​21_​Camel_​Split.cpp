#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, ans="";
    cin >> s;
    int len = s.size();
    for(int i=0; i<len; i++){
        if(islower(s[i]) || isupper(s[i])){
            ans += s[i];
            i++;
            while(islower(s[i])){
                ans += s[i];
                i++;
            }
            if(i!=len) ans += ", ";
        }
        if(isdigit(s[i])){
            ans += s[i];
            i++;
            while(isdigit(s[i])){
                ans += s[i];
                i++;
            }
            if(i!=len) ans += ", ";
        }
        i--;
    }
    cout << ans;
    return 0;
}
