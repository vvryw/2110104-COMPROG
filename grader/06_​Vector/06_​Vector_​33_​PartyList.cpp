#include <bits/stdc++.h>
using namespace std;
vector <pair <string, long long>> score;
vector <tuple<double, int, string>> sorsor;
vector <tuple<int, long long, string>> summary;
int main(){
    string str;
    double sum=0;
    while(cin >> str){
        double num;
        if(str == "END") break;
        cin >> num;
        sum += num;
        bool check = false;
        for(auto& i : score){
            if(str == i.first){ i.second += num; check = true; }
        }
        if(!check) score.push_back(make_pair(str, num));
    }

    long double avg = sum/100;
    long long sum2=0;
    for(auto & i : score){
        long double temp = i.second / avg;
        long double SED = -1.0*(temp - floor(temp));
        sorsor.push_back(make_tuple(SED, floor(temp), i.first));
        sum2 += floor(temp);
    }

    int ADD = 100 - sum2;
    if(ADD != 0){
        sort(sorsor.begin(), sorsor.end());
        for(int i=0; i<ADD; i++)
            get<1>(sorsor[i])++;
    }

    for(auto &i : score){
        for(auto &j : sorsor){
            if(i.first == get<2>(j)){
                summary.push_back(make_tuple(-1.0*get<1>(j), -1.0*i.second, i.first));
                break;
            }
        }
    }
    sort(summary.begin(), summary.end());
    for(auto &i : summary){
        if(get<0>(i) != 0) cout << get<2>(i) << " " << -1.0*get<0>(i) << " " << int(-1.0*get<1>(i)) << endl;
    }
    return 0;
}
