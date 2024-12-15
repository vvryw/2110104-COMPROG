#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<string, double>> a;
    string name;
    double price;
    while (cin >> name) {
        if (name == "END") break;
        cin >> price;
        a.push_back(make_pair(name,price));
    }
    vector<pair<double,string>> total;
    vector<string> b;
    string word;
    int cnt = 0;
    while (cin >> word) {
        b.push_back(word);
    }
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i].first == b[j]) cnt++;
        }
        if (cnt != 0) 
            total.push_back(make_pair(a[i].second*cnt,a[i].first));
        cnt = 0;
    }
    // for (int i = 0; i < total.size(); i++){
    //     cout << "[" <<  total[i].first << ',' << total[i].second << "]" << ' ';
    // }
    for (int i = 0; i < total.size(); i++) {
        total[i].first = total[i].first*(-1);
    }
    sort (total.begin(),total.end());
    for (int i = 0; i < total.size(); i++) {
        total[i].first = total[i].first*(-1);
    }
    if (total.size() == 0) cout << "No Sales";
    else if (total.size() < 3) {
        for (int i = 0; i < total.size(); i++){
        cout << total[i].second << ' ' << total[i].first <<endl;
        }
    }
    else {
        for (int i = 0; i < 3; i++){
        cout << total[i].second << ' ' << total[i].first <<endl;
        }
    }
}
