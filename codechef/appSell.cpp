#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long long n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<long long>());
    for(long long i = 0; i < n; i++) a[i] = a[i] * (i+1);
    long long max = 0;
    for(long long i = 0; i < n; i++)
        if(max < a[i])
            max = a[i];
    cout << max  << "\n";
    return 0;
}
