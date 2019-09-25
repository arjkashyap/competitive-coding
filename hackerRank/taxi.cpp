#include<bits/stdc++.h>
using namespace std;

int main(){
    long long d;
    cin >> d;
    long  oc, of, od;
    long cs, cb, cm, cd;
    cin >> oc >> of >> od;
    cin >> cs >> cb >> cm >> cd;
    long long costOnline, costClassic;
    costOnline = oc + (d - of ) * od;
    costClassic = cb + ( d / cs ) + d * cd ;
    if ( costClassic < costOnline )
        cout << "Classic Taxi " << endl;
    else if ( costOnline <= costClassic )
        cout << "Online Taxi" << endl;
    return 0;
}
