#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, k, preSum = 0;
    cin >> n >> k;
    int a[n], preSumArr[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        preSum += a[i];
        preSumArr[i] = preSum;
    }

    // Forward phase
    int currPos = k - 1;
    int maxSum = 0;
    while(currPos + 2 < n){
        if(preSumArr[currPos + 1] >= preSumArr[currPos + 2])
            currPos += 1;
        else
            currPos += 2;
        maxSum += a[currPos];
    }

    if((currPos == n - 2) && (preSumArr[currPos + 1] >= preSumArr[currPos - 1])){
        currPos += 1;
        maxSum += a[currPos];
    }
    preSumArr[n-1] -= preSumArr[n-2];
    for(int i = n-2; i > 0; i--){
        preSumArr[i] -= preSumArr[i-1];
        preSumArr[i] += preSumArr[i + 1];
    }
    preSumArr[0] += preSumArr[1];
    // Backward phase
    while(currPos - 2 >= 0){
        if(preSumArr[currPos - 1] >= preSumArr[currPos - 2])
            currPos -= 1;
        else
            currPos -= 2;
        maxSum += a[currPos];
    }
    if(currPos == 1){
        maxSum += a[0];
    }
    cout << maxSum << "\n";
    return 0;
}
