#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    string str, str2="";
    getline(cin, str);
    int len = str.size(), dig[]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0; i<len; i++){
        if(isdigit(str[i])) dig[str[i]-'0'] = 100;
    }
    for(int i=0; i<10; i++){
        if(dig[i] != 100){
            string a = to_string(dig[i]);
            str2 += a + ",";
        }
    }
    if(str2 == "") cout << "None";
    else {
        str2.erase(str2.size()-1, 1);
        cout << str2;
    }
    return 0;
}
