#include<bits/stdc++.h>
using namespace std;

int sum( int arr[], int n ){
    int sum = 0;
    for( int i = 0; i <= n; i++ ) sum += arr[i];
    return sum;
}

void countSol( int arr[], int n, int pow ){
    sort( arr, arr + n );
    int l = 0, h = n - 1;
    while( l <= h ){
        int mid = ( l + h ) / 2;
        if( arr[mid] == pow || (arr[mid - 1] < pow && arr[mid + 1] > pow )){
            cout << mid + 1 << " " << sum( arr, mid ) << endl;
            return;
        }
        else if ( arr[mid] < pow )
            l = mid + 1;
        else
            h = mid - 1;
    }
    
}

int main(){
    int n, q, p;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ) cin >> arr[i] ;
    
    cin >> q;
    while(q--){
        cin >> p;
        countSol( arr, n, p );
    }

    return 0;
}
