#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, inver=0;
    cin >> m;
    int a[m*m-1], zero=m-1;
    for(int i=0; i<m*m-1; i++){
        int num;
        cin >> num;
        if(num == 0){
            zero = i/m;
            i--;
        }
        else a[i] = num;
    }
    for(int i=0; i<m*m-2; i++){
        for(int j=i+1; j<m*m-1; j++){
            if(a[i] > a[j]) inver++;
        }
    }
    if(m%2==1){
        if(inver%2==0) cout << "YES";
        else cout << "NO";
    }
    else{
        if(inver%2==1 && zero%2==0) cout << "YES";
        else if(inver%2==0 && zero%2==1) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
