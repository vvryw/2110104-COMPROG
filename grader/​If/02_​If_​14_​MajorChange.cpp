#include <iostream>
using namespace std;
int main(){
    float gpax1, gpax2;
    string id1, id2;
    char cp1, cp2, cal11, cal21, cal12, cal22;
    cin >> id1 >> gpax1 >> cp1 >> cal11 >> cal21;
    cin >> id2 >> gpax2 >> cp2 >> cal12 >> cal22;

    //check nisit 1&2 is ok
    bool check1, check2;
    if(cp1=='A' && cal11<'D' && cal21<'D') check1 = true;
    else check1 = false;
    if(cp2=='A' && cal12<'D' && cal22<'D') check2 = true;
    else check2 = false;

    //check all
    if(check1 && !check2) cout << id1;
    else if(!check1 && check2) cout << id2;
    else if(!check1 && !check2) cout << "None";
    else{
        if(gpax1 > gpax2) cout << id1;
        else if(gpax1 < gpax2) cout << id2;
        else{
            if(cal11 < cal12) cout << id1;
            else if(cal11 > cal12) cout << id2;
            else{
                if(cal21 < cal22) cout << id1;
                else if(cal21 > cal22) cout << id2;
                else cout << "Both";
            }   
        }
    }
    return 0;
}
