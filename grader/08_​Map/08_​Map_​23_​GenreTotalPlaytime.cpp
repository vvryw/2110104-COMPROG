#include <bits/stdc++.h>
using namespace std;

vector <string> split(string s){
    vector <string> vec;
    string temp = "";
    for(char c : s){
        if(c != ' ') temp += c;
        else {
            vec.push_back(temp);
            temp = "";
        }
    }
    vec.push_back(temp);
    return vec;
}

int main(){
    map <string, int> m;
    vector <pair<int, string>> List;
    string str;
    while(getline(cin, str)){
        string genre, time;
        genre = split(str)[2];
        time = split(str)[3];
        int pos = time.find_first_of(':');
        int T = stoi(time.substr(0,pos))*60 + stoi(time.substr(pos+1));
        if(m.find(genre) != m.end()) m[genre] += T;
        else m.insert({genre, T});
    }
    for(auto &kv : m) List.push_back(make_pair(kv.second*-1, kv.first));
    sort(List.begin(), List.end());
    int len = List.size();
    if(len <= 3){
        for(auto &i : List){
            int t = i.first*-1;
            cout << i.second << " --> " << t/60 << ":" << t%60 << endl;
        }
    }
    else{
        for(int i=0; i<3; i++){
            int t = List[i].first*-1;
            cout << List[i].second << " --> " << t/60 << ":" << t%60 << endl;
        }
    }

    return 0;
}
