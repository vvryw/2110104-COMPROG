#include <bits/stdc++.h>
using namespace std;
int main(){
    string NUAY[12] = {"soon", "neung", "song", "sam", "si", "ha", "hok", "chet", "paet", "kao", "et", "yi"}; 
    int nuay[12] = {0,1,2,3,4,5,6,7,8,9,1,2};
    string LHAK[8] = {"sip", "roi", "phan", "muen", "saen", "lan"};
    int lhak[8] = {10,100,1000,10000,100000,1000000};

    while(1){
        string str;
        getline(cin, str);
        if(str == "q") break;
        else{
            vector <string> vec;
            int sum = 0, temp = 0;
            string a;
            stringstream ss(str);
            while(ss >> a) vec.push_back(a);
            int len = vec.size();
            for(int i=0; i<len; i++){
                for(int j=0; j<12; j++){
                    if(vec[i] == NUAY[j]) { temp = nuay[j]; break; }
                } 
                if(i < len-1 && temp != 0) i++;
                for(int j=0; j<8; j++){
                    if(vec[i] == LHAK[j]){
                        if(temp == 0) temp += lhak[j];
                        else temp *= lhak[j];
                        if(LHAK[j] == "sip"){
                            if(i != len-1) i++;
                            for(int k=0; k<12; k++){
                                if(vec[i] == NUAY[k]) { temp += nuay[k]; break; }
                            }
                        }
                        break;
                    }
                }
                //cout << "temp: " << temp << endl;
                sum += temp;
                temp = 0;
                //cout << "sum: " << sum << endl;
            }
            cout << sum << endl;
        }
    }
    return 0;
}
