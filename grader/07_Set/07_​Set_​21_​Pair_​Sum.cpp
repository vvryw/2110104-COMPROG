#include <bits/stdc++.h>
using namespace std;
int main(){
    long long k, cnt=0, num;
    set <long long> s;
    cin >> k;
    while(cin >> num){
        if(s.count(k-num)) cnt++;
        s.insert(num);
    }
    cout << cnt;
    return 0;
}
