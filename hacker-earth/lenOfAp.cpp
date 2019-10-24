#include<bits/stdc++.h>
using namespace std;

int lenAP( int l, int r, int d, int arr[]){
    l -= 1;
    r -= 1;
    int count = 1;
    for( int i = l; i <= r; i++ ){
        int c = 1;
        while( arr[i] + d == arr[i + 1] ){
            i++;
            c++;
        }
        cout << "i: " << i << endl;
        if( c > count )
            count = c;

    }

    return count;
}

int main(){
    int n, q, l, r, d;
    cin >> n >> q;
    int arr[n] = {0};
    for( int i = 0; i < n; i++ ) cin >> arr[i];
    for( int i = 0; i < q; i++ ){
        cin >> l >> r >> d;
        cout << lenAP( l, r, d, arr) << endl;
        }
   
    return 0;
}
