#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int tallest = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            tallest = max(tallest, a);
        }
        cout << tallest << "\n";
    }
    return 0;
}
