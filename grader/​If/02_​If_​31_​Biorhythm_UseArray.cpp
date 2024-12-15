#include <iostream>
#include <cmath>
using namespace std;

int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int totalDay(int day, int month, int year){
    int sum=0;
    sum += day;
    for(int i=0; i<month; i++)
        sum += a[i];
    if(((year%4==0 && year%100!=0) || year%400==0) && month>2) 
        sum++;
    return sum;
}

int leapYear(int year){
    bool check=false;
    if((year%4==0 && year%100!=0) || year%400==0) check = true;
    if(check) return 366;
    else return 365;
    
}

int main(){
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    y1-=543; y2-=543;
    int red, blue, black, t;
    red = leapYear(y1) - totalDay(d1, m1, y1) + 1;
    blue = totalDay(d2, m2, y2) - 1;
    black = (y2 - y1 - 1) * 365;
    t = red + blue + black;

    double phy = sin(2*M_PI*t/23);
    double emo = sin(2*M_PI*t/28);
    double intel = sin(2*M_PI*t/33);

    cout << t << " ";
    cout << round(phy*100.0)/100.0 << " ";
    cout << round(emo*100.0)/100.0 << " ";
    cout << round(intel*100.0)/100.0;
    return 0;
}
