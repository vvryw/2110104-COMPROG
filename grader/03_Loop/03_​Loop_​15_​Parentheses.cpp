#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int len = s.size();
    for(int i=0; i<len; i++){
        if(s[i] == '[') s[i] = '(';
        else if(s[i] == ']') s[i] = ')';
        else if(s[i] == '(') s[i] = '[';
        else if(s[i] == ')') s[i] = ']';
    }
    cout << s;
    return 0;
}
