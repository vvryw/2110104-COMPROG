#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt=1;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    //cout a[]
    for(int j=0; j<n; j++) cout << a[j] << " ";
    cout << endl;
    //pancake start here -->
    while(cnt < n){
        int mx = -1e9, temp[n], mx_idx;
        //copy a[] -> temp[]
        for(int j=0; j<n; j++) temp[j] = a[j];
        //find mx & mx_idx
        for(int j=0; j<n-cnt+1; j++){
            if(mx < a[j]){
                mx = a[j];
                mx_idx = j;
            }
        }
        //ถ้าตัว mx อยู่ถูกที่แล้วให้นับ cnt
        if(mx_idx == n-cnt) cnt++;
        //จัดให้ตัว mx มาอยู่ที่ idx 0
        else if(mx_idx != 0){
            for(int j=mx_idx; j>=0; j--) a[mx_idx-j] = temp[j];
            for(int j=0; j<n; j++) cout << a[j] << " ";
            cout << endl;
        }//จัดให้ mx ที่ idx=0 ไปอยู่ที่ n-cnt
        else if(mx_idx == 0){
            for(int j=0; j<n-cnt+1; j++) a[n-cnt-j] = temp[j];
            for(int j=0; j<n; j++) cout << a[j] << " ";
            cout << endl;
        }
    }
    return 0;
}
