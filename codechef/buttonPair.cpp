#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long int t;
    cin >> t;
    while(t--){
        long int n;
        cin >> n;
        long int odd = 0, even = 0;
        for(long int i = 0; i < n; i++){
            long int a;
            cin >> a;
            if(a%2 == 0)
                even++;
            else
                odd++;
        }
        cout << even * odd << "\n";
    }
    return 0;
}
