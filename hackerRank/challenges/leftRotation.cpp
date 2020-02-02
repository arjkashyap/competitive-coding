#include<bits/stdc++.h>
using namespace std;

void display(int *a, int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " "; 
    cout << "\n";
}

void rotate(int *a, int l, int r)
{
    while(l <= r){
        swap(a[l], a[r]);
        l++;
        r--;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n, d;
    cin >> n >> d;
    int a[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    rotate(a, 0, d-1);
    rotate(a, d, n -1);
    rotate(a, 0, n - 1);

    display(a, n);

    return 0;
}
