#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "RYGNBPK";
    string pt = "1234567";
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        bool check = 1;
        getline(cin, s);
        int len = s.size(), last_R = s.find_last_of('R'), cnt=0;
        if(s[0] != 'R' || s[2] == 'R' || len - last_R > 15 || s[last_R-2] == 'R') cout << "WRONG_INPUT\n";
        else{
            for(int i=0; i<len; i+=2){
                if(i<last_R){
                    if(s[i] == 'R'){
                        if(s[i+2] == 'R') {check = 0; break;}
                    }
                    else{
                        if(s[i-2] != 'R') {check = 0; break;}
                    }
                }

                for(int j=0; j<7; j++){
                    if(s[i] == str[j]){ 
                        cnt += pt[j] - '0';
                        break;
                    }
                }

                if(i == last_R+4 && s[i] != 'Y') {check = 0; break;}
                else if(i == last_R+6 && s[i] != 'G') {check = 0; break;}
                else if(i == last_R+8 && s[i] != 'N') {check = 0; break;}
                else if(i == last_R+10 && s[i] != 'B') {check = 0; break;}
                else if(i == last_R+12 && s[i] != 'P') {check = 0; break;}
                else if(i == last_R+14 && s[i] != 'K') {check = 0; break;}
            }
            if(check) cout << cnt << endl;
            else cout << "WRONG_INPUT\n";
        }
    }
    return 0;
}
/*
2
R Y R G R N R B R P R K R
R Y R G R G R K Y G N B P K R
*/
