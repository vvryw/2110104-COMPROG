#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a[10] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string b[10] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
    for (int i = 0; i < n; i++) {
        bool found = false;
        string name;
        cin >> name;
        for (int j = 0; j < 10; j++) {
            if (name == a[j]) {
                cout << b[j] << endl;
                found = true;
            }    
            else if (name == b[j]) {
                cout << a[j] << endl;
                found = true;
            }               
        }
        if (!found) cout << "Not found" << endl;
    }
    return 0;
}
