#include <bits/stdc++.h>
using namespace std;

int n, now, dist;
bool check = 0;

int warp(pair<int,int> arr[], int now){
    if(now == dist) check = 1;
    else{
        for(int i=0; i<n; i++){
            if(now == arr[i].first) {
                warp(arr, arr[i].second);
            }
            else continue;
        }
    }
    return 0;
}

int main(){
    cin >> n >> now >> dist;
    pair<int,int> arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    warp(arr, now);
    if(check) cout << "yes";
    else cout << "no";
    return 0;
}
