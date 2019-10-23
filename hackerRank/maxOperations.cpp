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
    int rem = c % 3;
    if( c == 3 ) return max(x, invertBits(a));
    else if ( c == 1) return a;
    else if( c == 2 ) return b;
    else if ( rem == 0 )  return max(x, invertBits(x));
    else if ( rem == 1 ) return max(a, invertBits(a));
    else return max(b, invertBits(b));
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
