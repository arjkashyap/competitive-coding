#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int i = a;
    while( i > 0 ){
        if( a%i == 0 && b % i == 0 )
            return i;
        i--;
    }
    return -1;
}

int gcdCount( int n ){
    int count = 0;
    for( int i = 1; i <= n; i++ ){
        if( gcd(i, n) != 1 && gcd(i, n) != i )
            count ++;
    }
    return count;
}

int main(){
    int q;
    cin >> q;
    while( q-- ){
        int n;
        cin >> n;
        cout << gcdCount( n ) << endl;        
    }
    {}
    return 0;
}
