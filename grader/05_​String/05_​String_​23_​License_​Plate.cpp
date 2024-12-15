#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    int num;
    cin >> num;
    int firstNum = stoi(input.substr(0,1));
    char firstChar = input[1];
    char secondChar = input[2];
    int secondNum = stoi(input.substr(4,3));

    //second Num
    secondNum += num;
    int add = secondNum/1000;
    secondNum %= 1000;

    //second Char
    secondChar += add%26;
    bool check = true;
    if(secondChar > 'Z'){ 
        secondChar -= 26;
        firstChar++;
        if(firstChar > 'Z') {
            firstChar -= 26;
            firstNum++;
            check = false;
        }
    }

    //first Char
    add /= 26;
    firstChar += add%26;
    if(firstChar > 'Z'){
        firstChar -= 26;
        if(check) firstNum++;
    }

    //first Num
    add /= 26;
    firstNum += add%26;
    if(firstNum > 10){
        firstNum %= 10;
    }

    cout << firstNum << firstChar << secondChar << "-";
    if(secondNum < 10) cout << "00" << secondNum;
    else if(secondNum < 100) cout << "0" << secondNum;
    else cout << secondNum;
    
    return 0;
}
