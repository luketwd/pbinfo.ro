#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main()
{
    int n,maxim=INT_MIN,minim=INT_MAX,x,cnt=0;
    while(1)
    {
        cin>>x;
        if(x==0)
            break;
        maxim=max(x,maxim);
        cnt++;
    }
    if(cnt)
    {
        cout<<maxim; return 0;
    }
    cout<<"NU EXISTA";

    return 0;   
}