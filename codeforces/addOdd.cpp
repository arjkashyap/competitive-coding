#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int diff = a - b;
        int res = 0;
        if (diff < 0){
            if(diff % 2 != 0)
                res = 1;
            else
                res = 2;
            
        }
        if(diff > 0){
            if(diff % 2 != 0)
                res = 2;
            else
                res = 1;
        }
        cout << res << "\n";
    }

    return 0;
}
