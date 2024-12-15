#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=1, n = s.size();
    for(int i=1; i<n+1; i++){
        if(s[i] != s[i-1]){
            cout << s[i-1] << ' ' << cnt << ' ';
            cnt = 1; 
        }
        else cnt++;
    }
    return 0;
}
