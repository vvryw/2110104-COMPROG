#include <bits/stdc++.h>
using namespace std;

vector<string> split(string line, char delimiter) {
    vector <string> out;
    string temp = "";
    for(auto c : line){
        if(c != delimiter) temp += c;
        else{
            if(temp != "") out.push_back(temp);
            temp = "";
        }
    }
    if(temp != "") out.push_back(temp);
    return out;
}

int main(){
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }

    return 0;
}
