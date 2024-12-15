#include <bits/stdc++.h>
using namespace std;

int DATE(int day, int month, int year){
  int date=0;
  if(month < 2) date += day;
  else if(month == 2) date += 31 + day;
  else{
    month -= 2;
    date += (month - 1) * 30;
    if(month < 7) date += month/2;
    else if(month == 7 || month == 8) date += 4;
    else date += 5;
    date += 31 + 28 + day;
    //leap year
    if((year%4==0 && year%100!=0) || year%400==0) date++;
  }
  return date;
}

int LEAP_YEAR(int y){
  if((y%4==0 && y%100!=0) || y%400==0) return 366;
  else return 365;
}
int main(){
  int d1, m1, y1, d2, m2, y2;
  cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
  
  int DANG = LEAP_YEAR(y1-543) - DATE(d1, m1, y1-543) + 1;
  int FAH = DATE(d2, m2, y2-543) - 1;
  int t = DANG + FAH + (y2-y1-1)*365;
  //cout << DANG << " " << FAH << " " << t << endl;
  
  float phy = sin(M_PI*2*t/23);
  float emo = sin(M_PI*2*t/28);
  float intel = sin(M_PI*2*t/33);
  
  cout << t << " " << round(phy*100.0)/100.0 << " " << round(emo*100.0)/100.0 << " " << round(intel*100.0)/100.0;
  return 0;
}
