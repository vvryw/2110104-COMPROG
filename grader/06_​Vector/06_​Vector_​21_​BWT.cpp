#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <string> vec;
    string str;
    cin >> str;
    str += '$';
    int len = str.size();
    for(int i=0; i<len; i++){
        string temp="";
        temp += str.substr(i, len-i);
        temp += str.substr(0, i);
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    // for(auto i : vec) cout << i << endl;
    for(auto i : vec) cout << i[len-1];
    return 0;
}
