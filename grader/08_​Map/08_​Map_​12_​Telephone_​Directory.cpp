#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, string> m1;
    map <string, string> m2;
    int n, m;
    cin >> n;
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str);
        int pos = str.rfind(' ');
        string name = str.substr(0,pos);
        string tel = str.substr(pos+1);
        m1.insert({name, tel});
        m2.insert({tel, name});
    }
    cin >> m;
    cin.ignore();
    while(m--){
        string input;
        getline(cin, input);
        if(m1.find(input) != m1.end()) cout << input << " --> " << m1[input] << endl;
        else if(m2.find(input) != m2.end()) cout <<  input << " --> " << m2[input] << endl;
        else cout << input << " --> Not found\n";
    }
    return 0;
}
