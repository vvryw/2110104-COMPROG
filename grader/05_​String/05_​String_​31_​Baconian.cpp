#include <bits/stdc++.h>
#include <cctype>
using namespace std;
string TEMP="";

int UP(int n, string STR, int CNT, int N){
    while(n>0){
        if(isalpha(STR[CNT])) TEMP += toupper(STR[CNT]);
        else{ TEMP += STR[CNT]; n++; }
        n--;
        if(N == 1) CNT = 0;
        else {CNT++; CNT%=N;}
    } return CNT;
}

int LOW(int n, string STR, int CNT, int N){
    while(n>0){
        if(isalpha(STR[CNT])) TEMP += tolower(STR[CNT]);
        else{ TEMP += STR[CNT]; n++; }
        n--;
        if(N == 1) CNT = 0;
        else {CNT++; CNT%=N;}
    } return CNT;
}

string CODE(char a, char b, char c, char d){
    string X="";
    if(isupper(a)) X += "U";
    else X += "L";
    if(isupper(b)) X += "U";
    else X += "L";
    if(isupper(c)) X += "U";
    else X += "L";
    if(isupper(d)) X += "U";
    else X += "L";
    return X;
}

int main(){
    string str;
    getline(cin, str);
    while(true){
        string t, x;
        t = x = "";
        getline(cin, t);
        if (t.empty()) break;
        x = t.substr(2);
        int n = str.size();
        int len = x.size();
        if(t.empty()) break;
        else{
            if(t[0] == 'E'){
                int cnt = 0;
                for(int i=0; i<len; i++){
                    if(x[i] == '0') cnt = UP(4, str, cnt, n);
                    else if(x[i] == '1'){
                        cnt = UP(3, str, cnt, n);
                        cnt = LOW(1, str, cnt, n);
                    }
                    else if(x[i] == '2'){
                        cnt = UP(2, str, cnt, n);
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(1, str, cnt, n);
                    }
                    else if(x[i] == '3'){
                        cnt = UP(2, str, cnt, n);
                        cnt = LOW(2, str, cnt, n);
                    }
                    else if(x[i] == '4'){
                        cnt = UP(1, str, cnt, n);
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(2, str, cnt, n);
                    }
                    else if(x[i] == '5'){
                        cnt = UP(1, str, cnt, n);
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(1, str, cnt, n);
                        cnt = LOW(1, str, cnt, n);
                    }
                    else if(x[i] == '6'){
                        cnt = UP(1, str, cnt, n);
                        cnt = LOW(2, str, cnt, n);
                        cnt = UP(1, str, cnt, n);
                    }
                    else if(x[i] == '7'){
                        cnt = UP(1, str, cnt, n);
                        cnt = LOW(3, str, cnt, n);
                    }
                    else if(x[i] == '8'){
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(3, str, cnt, n);
                    }
                    else if(x[i] == '9'){
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(2, str, cnt, n);
                        cnt = LOW(1, str, cnt, n);
                    }
                    else if(x[i] == '-'){
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(1, str, cnt, n);
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(1, str, cnt, n);
                    }
                    else if(x[i] == ','){
                        cnt = LOW(1, str, cnt, n);
                        cnt = UP(1, str, cnt, n);
                        cnt = LOW(2, str, cnt, n);
                    }
                }
                cout << TEMP << endl;
                TEMP = "";
            }
            else if(t[0] == 'D'){
                string D="", temp="", temptemp;
                for(int i=0; i<len; i++){
                    if(isalpha(x[i])) temp += x[i];
                }
                int l = temp.size();
                for(int i=0; i<l-3; i+=4){
                    temptemp = CODE(temp[i], temp[i+1], temp[i+2], temp[i+3]);
                    //cout << temptemp << endl;
                    if(temptemp == "UUUU") D += "0";
                    if(temptemp == "UUUL") D += "1";
                    if(temptemp == "UULU") D += "2";
                    if(temptemp == "UULL") D += "3";
                    if(temptemp == "ULUU") D += "4";
                    if(temptemp == "ULUL") D += "5";
                    if(temptemp == "ULLU") D += "6";
                    if(temptemp == "ULLL") D += "7";
                    if(temptemp == "LUUU") D += "8";
                    if(temptemp == "LUUL") D += "9";
                    if(temptemp == "LULU") D += "-";
                    if(temptemp == "LULL") D += ",";
                }
                cout << D << endl;
            }
        }
    }
    return 0;
}
