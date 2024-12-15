#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> sec;
    set <tuple<float, string, array<string, 4>>> list; // score id sec(vector)
    set <pair<string, string>> output; // id sec 
    int x, y;
    cin >> x;
    for(int i=0; i<x; i++){
        string pak;
        int mx;
        cin >> pak >> mx;
        sec[pak] = mx;
    }
    cin >> y;
    for(int i=0; i<y; i++){
        string id;
        array <string, 4> a; /* สำคัญ!!! */
        float score;
        cin >> id >> score; 
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        list.insert(make_tuple(-1.0*score, id, a));
    }

    for(auto &e : list){ // ไล่นิสิตทีละคน เรียงจากคะแนน
        for(auto &i : get<2>(e)){ // ไล่ภาคที่เลือกใน array
            if(sec[i] > 0){
                output.insert(make_pair(get<1>(e), i)); // เรียงจาก id และ ภาคที่ถูกเลือก
                sec[i]--; // ลดจำนวนที่นั่งในภาคที่ถูกเลือก
                break;
            }
        }
    }

    for(auto &e : output){
        cout << e.first << ' ' << e.second << endl;
    }
    return 0;
}
