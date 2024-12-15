#include <bits/stdc++.h>
using namespace std;
int main(){
    string str, word;
    getline(cin, word);
    getline(cin, str);
    int len = str.size();
    string temp = "";
    int cnt=0;
    for(int i=0; i<len; i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) temp += str[i];
        else{
            if(temp == word) cnt++;
            temp = "";
        }
    }
    if(temp == word) cnt++;
    cout << cnt;
    return 0;
}
