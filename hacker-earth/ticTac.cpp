#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int max = 0, min = 0;
        for( int i = 0; i < n; i++ )
            max += i*i;
        int tmp = n / 2;
        for(int i = 0; i < n; i++)
            min += tmp*tmp;
        cout << min << " " << max << endl;
        
    }
    
    return 0;
}
