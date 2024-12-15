#include <iostream>
using namespace std;
int main(){
    string s, t="";
    int k, cnt=1;
    cin >> s >> k;
    int n = s.size();
    for(int i=1; i<n+1; i++){
        if(s[i] != s[i-1]){
            if(cnt < k)
                t += s.substr(i-cnt, cnt);
            cnt = 1;
        }
        else cnt++;
    }
    cout << t;
    return 0;
}
