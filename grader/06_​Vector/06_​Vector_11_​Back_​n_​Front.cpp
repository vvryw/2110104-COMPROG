#include <bits/stdc++.h>
using namespace std;
vector <int> v1, v2;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int num, x=i;
        cin >> num;
        if(i%2==0)v1.push_back(num);
        else v2.push_back(num);
    }
    int cnt = n;
    string str;
    while(true){
        getline(cin, str);
        if(str == "-1") break;
        if(!str.empty()){
            int num;
            stringstream ss(str);
            while(ss >> num){
                if(cnt%2==0)v1.push_back(num);
                else v2.push_back(num);
                cnt++;
            }
        }
    }
    cout << "[";
    int len = v2.size();
    while(len--){
        cout << v2.back() << ", ";
        v2.pop_back();
    }
    int len2 = v1.size();
    for(int i=0; i<len2; i++){
        cout << v1[i];
        if(i != len2-1) cout << ", ";
    }
    cout << "]";

    return 0;
}
