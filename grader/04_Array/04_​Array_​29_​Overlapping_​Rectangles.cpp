#include <bits/stdc++.h>
using namespace std;
struct REC{
    int x1, y1, x2, y2;
};
struct OVERLAP{
    int area, rec1, rec2;
};
vector <OVERLAP> vec;
int main(){
    int n, mx=-1e9, check=0;
    cin >> n;
    REC a[n];
    for(int i=0; i<n; i++) cin >> a[i].x1 >> a[i].y1 >> a[i].x2 >> a[i].y2;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int x_left = max(a[i].x1, a[j].x1);
            int x_right = min(a[i].x2, a[j].x2);
            int y_bttm = max(a[i].y1, a[j].y1);
            int y_top = min(a[i].y2, a[j].y2);
            if(x_right > x_left && y_top > y_bttm){
                check = 1;
                int a = abs((x_right - x_left)*(y_top - y_bttm));
                if(mx < a) mx = a;
                OVERLAP X = {a, i, j};
                vec.push_back(X);
            }
        }
    }
    int len = vec.size();

    if(check){
        cout << "Max overlapping area = " << mx << endl;
        for(int i=0; i<len; i++){
            if(vec[i].area == mx) cout << "rectangles " << vec[i].rec1 << " and " << vec[i].rec2 << endl;
        }
    }else cout << "No overlaps";
    return 0;
}
