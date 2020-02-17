#include<bits/stdc++.h>
using namespace std;

int maxLen = 0;
int lo = 0, hi = 0;
void checkPal(string s, int l, int r)
{
    bool pal = true;
    while(l < r){
        if(s[l] != s[r]){
            pal = false;
            break;
        }
        l++;
        r--;
    }
    if(pal){
        int len = (r-l) + 1;
        if(len > maxLen){
            maxLen = len;
            lo = l;
            hi = r;
        }
    }
}

void longestPal(string s, int l, int r)
{
    cout << "l: " << l << " r: " << r << endl;
    if( l > r)
        return;
    checkPal(s, l, r);
    while( s[l] == s[r] ){
        l++;
        r--;
    }
    if (s[l] != s[r]){
        longestPal(s, l += 1, r);
        longestPal(s, l, r-= 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    cin >> s;
    longestPal(s, 0, n-1);
    cout << maxLen << endl;
    cout << lo << hi << endl;
    for(int i = lo; i <= hi; i++){
        cout << s[i];
        cout << "umm";
    }
    cout << endl;
    return 0;
}
