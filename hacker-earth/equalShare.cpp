#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define MOD 1000007

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for( int i = 0; i < n; i++ ) scanf("%d", &arr[i]);
    sort( arr, arr + n );
    int share = n / k;
    long long int div = 1;
    for( int i = share; i < n; i += share ){
         long long int interval = abs( arr[i] - arr[i - 1] - 1 );
         div *= interval;
    }
    printf("%lli \n", div % MOD);
    return 0;
}
