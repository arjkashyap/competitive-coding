#include<bits/stdc++.h>
using namespace std;

int factorial( int n ){
    if ( n == 1 )
        return 1;
    
    return n * factorial( n - 1 );
}

int perm( int n, int r  = 1){
    if ( n == r )
        return 1;
    int p = factorial( n );
    int q = factorial( n - r);
    return ( p / q );
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
    sort( arr, arr + n );
    int share = n / k;
    int div = 1;
    for( int i = share; i < n; i += share ){
        int interval = abs( arr[i] - arr[i - 1] - 1 );
         div *= perm( interval );
    }
    printf("%d \n", div);
    return 0;
}
