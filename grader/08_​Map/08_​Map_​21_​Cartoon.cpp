#include <bits/stdc++.h>
using namespace std;

int main(){
    map <string, int> m1; //ชนิด ละดับ
    map <int, vector<string>> m2; //ลำดับ รายชื่อตัวละคร
    string name;
    int i=0;
    while(cin >> name){
        string type;
        cin >> type;
        if(m1.find(type) == m1.end()){ 
            m1.insert({type, i}); //insert m1 {bear, 0}
            vector <string> temp;
            temp.push_back(type); //temp = {bear}
            temp.push_back(name);
            m2.insert({i, temp}); //insert m2 {0, {bear}}
            i++;
        }
        else{
            int pos = m1[type]; //m1[bear] = 0
            m2[pos].push_back(name); //m2[0] add Ted -> m2 {0, {bear, Ted}}
        }
    }
    for(int j=0; j<=i; j++){
        bool isFirst = true;
        for(string &s : m2[j]){
            if(isFirst){ 
                cout << s << ": "; 
                isFirst = false; 
            } 
            else cout << s << " ";          
        }
        cout << endl;
    }
    return 0;
}
