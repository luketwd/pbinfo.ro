#include <bits/stdc++.h>
using namespace std;


int main(){
    int x,s=0,y;
    cin >> x;
    if(x<0) x = -x;
    cin >> y;
    if(y<0)
        y= -y;
    while(y){
        if(x%10==y%10)
            s++;
        x = y;
        cin >> y;
        if(y<0)
            y= -y;

    }
    cout << s << endl;
    return 0;
}