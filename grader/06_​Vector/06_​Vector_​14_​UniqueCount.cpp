#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> vCin, vCout;
    int num;
    while(cin >> num){
        vCin.push_back(num);
    }
    sort(vCin.begin(), vCin.end());
    int len = vCin.size(), cnt=0;
    for(int i=1; i<=len; i++){
        if(vCin[i] != vCin[i-1]){
            cnt++;
            vCout.push_back(vCin[i-1]);
        }
    }
    cout << cnt << endl;
    if(cnt > 10){
        for(int i=0; i<10; i++)
            cout << vCout[i] << ' ';
    }
    else{
        for(auto i : vCout)
            cout << i << ' ';   
    }
    return 0;
}
