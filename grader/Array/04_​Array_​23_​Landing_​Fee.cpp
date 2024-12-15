#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cin >> n;
    string str, cntry[n];
    int fee[n];
    for(int i=0; i<n; i++) cin >> cntry[i] >> fee[i];
    cin.ignore();
    getline(cin, str);
    int len = str.size();
    for(int i=11; i<len; i+=7){
        if(str.substr(i, 2) != str.substr(i-7, 2)){
            for(int j=0; j<n; j++){
                if(str.substr(i, 2) == cntry[j]){ sum += fee[j]; break;}
            }
        }
    }
    cout << sum;
    return 0;
}
