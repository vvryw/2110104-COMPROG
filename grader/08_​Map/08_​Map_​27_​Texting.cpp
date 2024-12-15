#include <bits/stdc++.h>
using namespace std;

vector <string> split(string s){
    vector <string> output;
    int len = s.size();
    string temp = "";
    for(int i=0; i<len; i++){
        if(s[i] != ' ') temp +=s[i];
        else{
            output.push_back(temp);
            temp="";
        }
    } output.push_back(temp);
    return output;
}

int main() {
    map <string, char> K2T;
    map <char, string> T2K;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    int cnt = 0;
    K2T["0"] = ' '; 
    for(int i=2; i<10; i++){
        string temp = to_string(i);
        K2T[temp] = alpha[cnt];
        for(int j=0; j<2; j++){
            cnt++;
            temp += to_string(i);
            K2T[temp] = alpha[cnt];
        } 
        if(i == 9 || i == 7){
            cnt++;
            temp += to_string(i);
            K2T[temp] = alpha[cnt];
        }
        cnt++;
    }
    for(auto &kv : K2T) T2K[kv.second] = kv.first;
    // for(auto &kv : T2K) cout << kv.first << " : " << kv.second << endl; 
    string opr;
    while(cin >> opr){
        cin.ignore();
        string str;
        getline(cin, str);
        if(opr == "T2K"){
            int len = str.size();
            cout << ">> ";
            for(int i=0; i<len; i++){
                char c = tolower(str[i]);
                if(T2K.find(c) != T2K.end()) cout << T2K[c] << " ";
            }
        }
        else if(opr == "K2T"){
            vector <string> vec = split(str);
            cout << ">> ";
            for(auto &i : vec) cout << K2T[i];
        }
        cout << endl;
    }
    return 0;
}
