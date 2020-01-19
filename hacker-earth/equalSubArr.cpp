#include<bits/stdc++.h>
using namespace std;

int maxLen = 0;

int max(int* a, int start, int end)
{
    int m = 0;
    for(int i = start; i <= end;i ++){
        if(a[i] >= m)
            m = a[i];
    }
    return m;
}

void equalSub(int *A, int n, int k, int st, int en = 1)
{
    if( st > n - 2 || en > n - 1){
        return;
    }
    else{
        int maxNum = max(A, st, en);
        int sum = 0;
        
        for( int i = st; i <= en; i++ ){
            sum += maxNum - A[i];
        }
        if(sum > maxLen || sum <= k)
            maxLen = sum;

        equalSub(A, n, k, st, en + 1);
        equalSub(A, n, k, st + 1, st + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n = 0, k = 0;
    cin >> n;
    cin >> k;
    int A[n] = {0};
    for( int i = 0; i < n; i++ )
        cin >> A[i];
    equalSub(A, n, k, 0);
    cout << maxLen << "\n";
    return 0;
}
