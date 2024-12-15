#include <iostream>
#include <cmath>
using namespace std;

struct LIFT{
    int no, start, end, dir, sum;  
};

int main(){
    int n, q;
    cin >> n;
    LIFT a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].no >> a[i].start >> a[i].end;
        if(a[i].start > a[i].end) a[i].dir = -1;
        else if(a[i].start < a[i].end) a[i].dir = 1;
        else a[i].dir = 0;
    }
    cin >> q;
    while(q--){
        int pos, dest, dir;
        cin >> pos >> dest;
        if(pos > dest) dir = -1;
        else dir = 1;

        int mn = 1e9;
        int mn_lift = 1e9;

        for(int i=0; i<n; i++){
            if((pos >= a[i].start && pos <= a[i].end) || (pos <= a[i].start && pos >= a[i].end)){
                if(dir == a[i].dir || a[i].dir == 0){
                    if((dest >= a[i].start && dest <= a[i].end) || (dest <= a[i].start && dest >= a[i].end))
                        a[i].sum = 0;
                    else a[i].sum = abs(dest - a[i].end);
                }
                else if(dir != a[i].dir || a[i].dir == 0){
                    a[i].sum = abs(a[i].end - pos) + abs(pos - dest);
                }
            }
            else{
                a[i].sum = abs(a[i].end - pos) + abs(pos - dest);
            }

            if((a[i].sum < mn) || (a[i].sum==mn && a[i].no < mn_lift)){
                mn = a[i].sum;
                mn_lift = a[i].no;
            }
        }

        cout << ">> " << mn_lift << endl;

    }
    return 0;
}
