#include<bits/stdc++.h>
using namespace std;

void operation(int *arr, int n, int l, int r, int x)
{
    for( int i = l-1; i < r; i++ )
        arr[i] += x;
}

int score(int *a, int n, int *b, int m)
{
    int sum = 0;
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            sum += a[i]*b[j];
            
        }
    }
    return (sum%998244353);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, q;
        cin >> n >> m;
        int a[n], b[m];
        for( int i = 0; i < n; i++ ) cin >> a[i];
        for( int i = 0; i < m; i++ ) cin >> b[i];
        cin >> q;
        while(q--){
            int choice, l = 0, r = 0, x = 0;
            cin >> choice;
            if(choice == 1){
                cin >> l >> r >> x;
                operation(a, n, l, r , x);
            }
            else if( choice == 2 ){
                cin >> l >> r >> x;
                operation(b, m, l, r, x);
            }
            else if (choice == 3)
                cout << score(a, n, b, m) << endl;
        }
    }

    return 0;
}
