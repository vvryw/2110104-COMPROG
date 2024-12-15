#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <pair< pair<int,int> , pair<int,int> >> vec;
    vector <int> vCin;
    int num;
    while(cin >> num){
        vCin.push_back(num);
    }

    int len = vCin.size();
    int cnt=1, mx=-1e9;
    for(int i=1; i<len; i++){
        if(vCin[i-1] == vCin[i]) cnt++;
        else{
            pair<int,int> cntNum = make_pair(cnt*-1, vCin[i-1]);
            pair<int,int> startStop = make_pair(i-cnt, i);
            vec.push_back(make_pair(cntNum, startStop));
            if(mx < cnt) mx = cnt;
            cnt=1;
        }
    }
    pair<int,int> cntNum = make_pair(cnt*-1, vCin[len-1]);
    pair<int,int> startStop = make_pair(len-cnt, len);
    vec.push_back(make_pair(cntNum, startStop));
    if(mx < cnt) mx = cnt;
    
    sort(vec.begin(), vec.end());
    int len2 = vec.size();
    for(auto i : vec){
        if(i.first.first*-1 == mx){
            cout << i.first.second << " --> x[ ";
            cout << i.second.first << " : " << i.second.second << " ] \n";
        }
    }
    return 0;
}
