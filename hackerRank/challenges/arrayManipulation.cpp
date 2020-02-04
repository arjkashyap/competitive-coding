#include<bits/stdc++.h>
using namespace std;

long long maxNum(long long a, long long b)
{
    if(a > b) return a;
    return b;
}

int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    long long arr = new long long[n+2];
    while(m--){
        long long a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b+1] -= k;
    }
    long long res = 0;
    for(int i = 1; i <= n; i++){
        arr[i] += arr[i-1];
        res = maxNum(arr[i], res);
    }
    cout << res << "\n";

    return 0;
}
