#include <iostream>
using namespace std;
int main(){
    string key, ans;
    getline(cin, key);
    //cin.ignore();
    getline(cin, ans);
    int lenK = key.size(); // cout << lenK << endl;
    int lenA = ans.size(); // cout << lenA << endl;
    int cnt=0;
    if(lenK != lenA) cout << "Incomplete answer";
    else{
        for(int i=0; i<lenK; i++){
            if(key[i] == ans[i]) cnt++;
        }
        cout << cnt;
    } 
    return 0;
}
