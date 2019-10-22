#include<bits/stdc++.h>
using namespace std;

int invertBits(int num) 
{ 
    int x = 0;
    if( num < 4 )
        x = 3;
    else
	    x = log2(num) + 1; 
    

	for (int i = 0; i < x; i++) 
	    num = (num ^ (1 << i)); 
   
	return num; 
} 

int seqMax(int a, int b, int c){
   int x = a ^ b;

    if ( c == 1 )
       return a;
   else if ( c == 2 )
       return b;
   else if ( c % 3 == 0 )
       return max( x, invertBits(x) );
    else{
        for( int i = 1; i < c; i+=a ){
            if( i == a)
                return max(a, invertBits(a));
        }
        return max(b, invertBits(b));
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        cout << seqMax(a, b, c) << endl;
    }
    return 0;
}
