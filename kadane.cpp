// find the max sum of contageous array
// here we use prefix sum technique

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >>  n;
        int arr[n];
        for( int i = 0 ; i < n; i++ ) cin >> arr[i];
        int max = arr[0];
        for(int i = 1; i < n; i++){
            arr[i] = arr[i] + arr[i-1];
            if( arr[i] > max )
                max = arr[i];
        }
        cout << max << endl;
    }
    
    return 0;
}
