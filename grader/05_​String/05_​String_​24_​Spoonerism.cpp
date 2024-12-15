#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, temp1="", temp2="";
    getline(cin, s);
    int cnt1, cnt2, len = s.size();
    int space1 = s.find_first_of(" ");
    int space2 = s.find_last_of(" ");

    for(int i=0; i<space1; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            temp1 += s.substr(i, space1-i);
            cnt1 = i;
            break;
        }
    }
    for(int i=space2+1; i<len; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            temp2 += s.substr(i, len);
            cnt2 = i;
            break;
        }
    }
    cout << s.substr(0, cnt1) << temp2;
    cout << s.substr(space1, cnt2-space1) << temp1;

    return 0;
}
