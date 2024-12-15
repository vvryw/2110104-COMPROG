#include <iostream>
#include <cmath>
using namespace std;

long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}

int main(){
    string whole, first, second;
    cin >> whole >> first >> second;
    string add = first + second;

    long long SED = stoi(add) - stoi(first);
    long long SUAN = pow(10, add.size()) - pow(10, first.size());
    long long GCD = gcd(SED, SUAN);
    
    SED /= GCD;
    SUAN /= GCD;
    
    cout << stoi(whole)*SUAN + SED << " / " << SUAN;
    return 0;
}   
