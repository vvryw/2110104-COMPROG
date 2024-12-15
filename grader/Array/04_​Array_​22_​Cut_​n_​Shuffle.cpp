#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n], opr;
    for(int i=0; i<n; i++) cin >> s[i];
    cin.ignore();
    getline(cin, opr);
    int len = opr.size();
    for(int i=0; i<len; i++){
        int cnt=0;
        string temp[n];
        for(int j=0; j<n; j++) temp[j] = s[j];
        if(opr[i] == 'C'){
            for(int j=0; j<n/2; j++) s[j] = temp[j+n/2];
            for(int j=n/2; j<n; j++) s[j] = temp[j-n/2];
        }
        else if(opr[i] == 'S'){
            for(int j=0; j<n; j++){
                if(j%2==0) s[j] = temp[j - cnt];
                else{
                    s[j] = temp[n/2 + cnt];
                    cnt++;
                }
            }
        }
    }
    for(int i=0; i<n; i++) cout << s[i] << " ";
    return 0;
}
