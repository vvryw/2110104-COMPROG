#include <iostream>
using namespace std;

long long pm(long long a, long long k, long long m){
    if(k == 0) return 1;
    if(k%2 == 0)
        return pm(a, k/2, m)*pm(a, k/2, m)%m;
    if(k%2 == 1) 
        return a*pm(a, k/2, m)*pm(a, k/2, m)%m;
}

int main(){
    long long a, k, m;
    cin >> a >> k >> m;
    cout << pm(a, k, m);
}
