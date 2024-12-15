#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt=0;
    cin >> n;
    int a[n], mx = -1e9;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(mx < a[i]) mx = a[i];
    }
    for(int i=0; i<mx; i++){
        int temp=-1;
        for(int j=0; j<n; j++){
            if(i >= mx - a[j] && temp == -1) temp = j;
            if(i >= mx - a[j] && temp != j){
                cnt += (j-temp-1);
                temp = j;
            }
        }
   }
   cout << cnt;
    return 0;
}
