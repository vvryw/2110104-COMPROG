using namespace std;
int main(){
    string str;
    cin >> str;
    if(isdigit(str[0])){
        int id = stoi(str);
        if(str=="01" || str=="02" || (id>=20 && id<=40) || id==51 || id==53 || id==55 || id==58)
            cout << "OK";
        else cout << "Error";
    }
    else cout << "Error";
    return 0;
}
