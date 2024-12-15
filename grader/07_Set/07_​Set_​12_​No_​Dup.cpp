#include <bits/stdc++.h>
using namespace std;
int main(){
    set <int> s;
    int num, cnt=1;
    while(true){
        cin >> num;
        if(s.count(num) == 0) s.insert(num);
        else{
            cout << cnt;
            return 0;
        } cnt++;
    }
    cout << "-1";
    return 0;
}
