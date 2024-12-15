#include <bits/stdc++.h>
using namespace std;

string DIG[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string SIB[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string SIB2[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string MAG[6] = {"", "", "thousand", "million", "billion", "trillion"};

void NUAY(int x){
    if(x != 0) cout << DIG[x] << " ";
}

void ZIB(int first, int second){
    if(first == 1) cout << SIB[second] << " ";
    else if(first != 1 && first != 0){
        cout << SIB2[first-2] << " ";
        if(second != 0) NUAY(second);
    }
    else if(first == 0 && second != 0) NUAY(second);
}

int main(){
    string str;
    cin >> str;
    int len = str.size();
    int magnitude = len/3;
    if(len%3 != 0) magnitude++; 
    if(str == "0") {cout << "zero"; return 0;}
    if(len%3 == 1){
        NUAY(str[0] - '0');
        cout << MAG[magnitude] << " ";
        magnitude--;
    }
    else if(len%3 == 2){
        ZIB(str[0] - '0', str[1] - '0');
        cout << MAG[magnitude] << " ";
        magnitude--;
    }

    for(int i=len%3; i<len; i+=3){
        NUAY(str[i] - '0');
        if(str[i] != '0') cout << "hundred ";
        ZIB(str[i+1] - '0', str[i+2] - '0');
        if(str[i] - '0' != 0 || str[i+1] - '0' != 0 || str[i+2] - '0' != 0) cout << MAG[magnitude] << " ";
        magnitude--;
    }

    return 0;
}
