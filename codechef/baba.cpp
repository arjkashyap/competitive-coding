#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        long int n;
        cin >> n;
        long int max_num = 0;
        for(int i = 0; i <  n; i++)
        {
            long int a;
            cin >> a;
            if(a > max_num)
                max_num = a;
        }
        cout << max_num << endl;
    }
    return 0;
}
