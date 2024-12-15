#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector <int> vec;
    cin >> n;
    vec.push_back(n);
    while(n != 1){
        if(n%2==0){
            n /= 2;
            vec.push_back(n);
        }
        else{
            n = 3*n + 1;
            vec.push_back(n);
        }
    }
    int len = vec.size();
    if(len < 16){
        for(int i=0; i<len; i++){
            cout << vec[i];
            if(i != len-1) cout << "->";
        }
    }
    else{
        int x = len-15;
        for(int i=x; i<len; i++){
            cout << vec[i];
            if(i != len-1) cout << "->";
        }
    }
    return 0;
}
