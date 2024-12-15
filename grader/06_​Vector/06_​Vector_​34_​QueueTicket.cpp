#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <tuple <int, bool, int>> q;
    int n;
    cin >> n;
    double sum = 0, cnt=0;
    while(n--){
        string opr;
        cin >> opr;
        int num, t;
        if(opr == "reset") cin >> num;
        else if(opr == "new"){
            cin >> t;
            q.push_back(make_tuple(num, 0, t));
            cout << ">> ticket " << num << endl;
            num++;
        }
        else if(opr == "next"){
            if(get<1>(q[0])) q.erase(q.begin());
            else get<1>(q[0]) = 1;
            cout << ">> call " << get<0>(q[0]) << endl;
            get<1>(q[0]) = 1;
        }
        else if(opr == "order"){
            cin >> t;
            int dt = t - get<2>(q[0]);
            cout << ">> qtime " << get<0>(q[0]) << ' ' << dt << endl;
            q.erase(q.begin());
            sum += dt;
            cnt++;
        }
        else if(opr == "avg_qtime"){
            double avg = sum / cnt;
            cout << ">> avg_qtime " << round(avg*100.0)/100.0 << endl;
        };
    }
    return 0;
}
