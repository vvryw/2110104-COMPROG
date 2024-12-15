#include <bits/stdc++.h>
using namespace std;
int main(){
    string a[6][5];
    string b[6][5];
    vector <string> list, keep, row;
    vector<vector <string>> vec;

    for(int i=0; i<6; i++){
        for(int j=0; j<5; j++) b[i][j] = "X";
    }
    b[3][2] = "*";

    for(int i=0; i<6; i++){
        for(int j=0; j<5; j++) cin >> a[i][j];
    }
    cin.ignore();

    while(true){
        string str;
        getline(cin, str);
        if(str == "") break;
        else{
            string temp;
            stringstream ss(str);
            while(ss >> temp) list.push_back(temp);
        }
    } int cnt = 0;
    for(auto i : list){
        string alpha = i.substr(0,1);
        string num = i.substr(1);
        for(int j=0; j<5; j++){
            if(alpha == a[0][j]){
                for(int k=1; k<6; k++){
                    if(num == a[k][j]){ 
                        keep.push_back(i);
                        b[k][j] = "*"; 
                        break;
                    }
                }
            }
        }
        cnt++;
        //check bingo แนวนอน
        bool check = false;
        for(int j=1; j<6; j++){              
            if(b[j][0]+b[j][1]+b[j][2]+b[j][3]+b[j][4] == "*****"){
                check = true;
                vector <string> row;
                row.push_back("B" + a[j][0]);
                row.push_back("I" + a[j][1]);
                row.push_back("N" + a[j][2]);
                row.push_back("G" + a[j][3]);
                row.push_back("O" + a[j][4]);
                vec.push_back(row);
            }
        }
        //check bingo แนวตั้ง
        for(int j=0; j<5; j++){              
            if(b[1][j] + b[2][j] + b[3][j] + b[4][j] + b[5][j] == "*****"){
                check = true;
                vector <string> row;
                row.push_back(a[0][j] + a[1][j]);
                row.push_back(a[0][j] + a[2][j]);
                row.push_back(a[0][j] + a[3][j]);
                row.push_back(a[0][j] + a[4][j]);
                row.push_back(a[0][j] + a[5][j]);
                vec.push_back(row);
            }
        }
        //check แนวทะแยง upper left -> bottom right
        if(b[1][0] + b[2][1] + b[3][2] + b[4][3] + b[5][4] == "*****"){
            check = true;
            vector <string> row;
            row.push_back("B" + a[1][0]);
            row.push_back("I" + a[2][1]);
            row.push_back("N" + a[3][2]);
            row.push_back("G" + a[4][3]);
            row.push_back("O" + a[5][4]);
            vec.push_back(row);
        }
        //check แนวทะแยง bottom left -> upper right
        else if(b[5][0] + b[4][1] + b[3][2] + b[2][3] + b[1][4] == "*****"){
            check = true;
            vector <string> row;
            row.push_back("B" + a[5][0]);
            row.push_back("I" + a[4][1]);
            row.push_back("N" + a[3][2]);
            row.push_back("G" + a[2][3]);
            row.push_back("O" + a[1][4]);
            vec.push_back(row);
        }

        //break เมื่อได้ bingo
        if(check) break;
    }

    cout << cnt << endl;
    int CNT=0;
    for(auto& row : vec){
        for(auto& elem : row){
            if(CNT == 3) break;
            if(elem.substr(1) != "*") cout << elem;
            if(elem != row[4] && elem.substr(1) != "*") cout << ", ";
        } cout << endl; cnt++;
    } 

    return 0;
}
