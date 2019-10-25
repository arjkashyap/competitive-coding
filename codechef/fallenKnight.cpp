#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int rem = 0;
        rem = n % 10;
        if( n + k < ( n + (10 - rem )))
            cout << n + k << endl;
        else if( (n + k) == ( n + (10 - rem )) )
            cout << n / 10;
        else{
            n -= rem;
            k -= 10 - rem;
            n += ( k % 10 );
            cout << n << endl;
        }
    }
        
    return 0;
}
