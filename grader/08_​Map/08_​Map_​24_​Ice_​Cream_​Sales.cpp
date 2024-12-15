#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, double> price, total;
    int n;
    cin >> n;
    while(n--){
        string ic;
        double p;
        cin >> ic >> p;
        price[ic] = p;
        total[ic] = 0;
    }
    double sum=0, m, mx=-1e9;
    cin >> m;
    while(m--){
        double cnt;
        string name;
        cin >> name >> cnt;
        if(price.find(name) != price.end()){
            total[name] += (cnt*price[name]);
            sum += cnt*price[name];
            if(mx < total[name]) mx = total[name];
        }
    }

    if(sum == 0) cout << "No ice cream sales";
    else{
        cout << "Total ice cream sales: " << sum << endl;
        set <string> s;
        for(auto &kv : total){
            if(kv.second == mx) s.insert(kv.first);
        }   
        cout << "Top sales: ";
        for(auto &e : s){
            cout << e << ' ';
        }
    }
    return 0;
}
