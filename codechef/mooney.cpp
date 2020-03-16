#include<bits/stdc++.h>
using namespace std;

int sumArr(long int *a, int n)
{
    long int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int maxSum(long int *a, int n, int index)
{
    long int sum = 0;
    if(index <= (n - 3)){
        return a[index] + a[index + 1] + a[index + 2];
    }
    else{
        if(index == n-1)
            return a[index] + a[0] + a[1];
        else if (index == n - 2)
            return a[index] + a[index + 1] + a[0];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        if(n <= 3)
            cout << sumArr(a, n);
        else{
            int max_sum = 0;
            for(int i = 0; i < n; i++){
                max_sum = max(max_sum, maxSum(a, n, i));
            }
            cout << max_sum;
        }
        cout << "\n";
    }
    return 0;
}
