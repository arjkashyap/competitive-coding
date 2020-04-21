#include <bits/stdc++.h>
using namespace std;

#define MAX_BIT 32768

int leftShift(int n, int m)
{
    int index = m;
    while (index--)
    {
        int leftSet = MAX_BIT & n;
        if (!(leftSet))
        {
            n = n << 1;
        }
        else
        {
            n = n ^ MAX_BIT;
            n = n << 1;
            n = n | 1;
        }
    }
    return n;
}

int rightShift(int n, int m)
{
    int index = m;
    while (index--)
    {
        if (!(n & 1))
        {
            n = n >> 1;
        }
        else
        {
            n = n >> 1;
            n = MAX_BIT | n;
        }
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        char c;

        cin >> n >> m >> c;
        if (c == 'L')
            cout << leftShift(n, m);
        else if (c == 'R')
            cout << rightShift(n, m);

        cout << "\n";
    }

    return 0;
}