#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], cnt=0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cout << a[i] << ' ';
    cout << endl;
    while(cnt < n){
        //find mx mx_idx
        int mx=-1e9, mx_idx;
        for(int i=0; i<n-cnt; i++){
            if(mx < a[i]){
                mx = a[i];
                mx_idx = i;
            }
        }
        // ถ้า mx อยู่ถูกที่แล้ว เพิ่ม cnt
        if(mx_idx == n-cnt-1) cnt++;
        // ถ้า mx อยู่ที่ idx=0 -> reverse ไป n-cnt
        else if(mx_idx == 0){
            reverse(a, a + n-cnt);
            for(int i=0; i<n; i++) cout << a[i] << ' ';
            cout << endl;
        }
        // ถ้า mx อยู่ไหนไม่รู้ เอาไปไว้ที่ idx=0
        else if(mx_idx != 0){
            reverse(a, a + mx_idx + 1);
            for(int i=0; i<n; i++) cout << a[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}
