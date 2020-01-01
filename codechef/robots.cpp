#include<bits/stdc++.h>
#include<string>
using namespace std;

string check( string s, int a, int b )
{
    int l, h, n = s.length();
    for( int i = 0; i < n; i++ ){
        if( s[i] == 'A' )
            l = i;
        if( s[i] == 'B' )
            h = i;
    }
    cout << "l: " << l << " h: " << h << endl;
    while( l < h ){
        l += a; h-= b;
        if( l == h )
            return "unsafe";
    }
    return "safe";
}

int main()
{
    int t;
    cin >> t;
    while( t-- ){
      string str;
      int sa, sb;
      cin >> str;
      cin >> sa >> sb;
      cout << check(str, sa, sb) << endl; 
      
    }

    return 0;
}
