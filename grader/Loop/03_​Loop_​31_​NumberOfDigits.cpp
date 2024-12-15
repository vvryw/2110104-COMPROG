#include <bits/stdc++.h>
using namespace std;
int main(){
    long long M, N;
    cin >> M >> N;
    string a = to_string(M), b = to_string(N);
    int len_M = a.size(), len_N = b.size();
    long long SUM=0;
    if(len_M == len_N) SUM = (N - M + 1) * len_M;
    else{
        if(M<10 && N<100) SUM = (10-M) + (N-9)*2;
        else{
            SUM += ((pow(10LL, len_M) - M) * len_M);
            for(int i=len_M+1; i<len_N; i++){
                long long temp = pow(10LL, i-1)*i*9;
                SUM += temp;
            }
            if(N == pow(10LL, len_N-1)) SUM += len_N;
            else SUM += ((N - pow(10LL, len_N-1) + 1) * len_N);
        }
    }
    cout << SUM;
    return 0;
}
