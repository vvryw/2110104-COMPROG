#include <bits/stdc++.h>
using namespace std;
int main(){
    string a[8] = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    //grade order id
    vector <tuple <int, int, string>> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string id;
        string grade;
        cin >> id >> grade;
        for(int j=0; j<8; j++){
            if(grade == a[j]){
                v.push_back(make_tuple(j, i, id));
                break;
            }
        }
    }
    vector <pair<string, string>> list;
    cin.ignore();
    while(1){
        string s;
        getline(cin, s);
        if(s == "") break;
        stringstream ss(s);
        string temp;
        while(ss >> temp){
            string id = temp.substr(0, temp.size()-1);
            string updown = temp.substr(temp.size()-1);
            // cout << "id: " << id << " updown: " << updown << endl;
            list.push_back(make_pair(id, updown));
        }
    }

    for(auto &i : list){
        for(auto &j : v){
            if(i.first == get<2>(j)){
                if(i.second == "-"){
                    if(get<0>(j) < 7) get<0>(j)++;
                }
                else{
                    if(get<0>(j) > 0) get<0>(j)--;
                }
                break;
            }
        }
    }

    sort(v.begin(), v.end());
    for(auto &i : v){
        cout << get<2>(i) << ' ' << a[get<0>(i)] << endl;
    }

    return 0;
}
