#include<bits/stdc++.h>
using namespace std;

int factorial(int x, int result = 1){
    if ( x == 1 )
        return result;
    return factorial( x - 1, x * result );
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, total = 0, x = 0;
        cin >> n;
        int p[n];
        for( int i = 0; i < n; i++ ) p[i] = i+1;
        total = factorial(n);
        for( int i = 0; i < n; i++ ) x+= n - p[i];
        cout << x * total << endl;
    }
    
    return 0;
}
