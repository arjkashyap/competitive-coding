#include<bits/stdc++.h>
using namespace std;

int maxLen = 0;
int lo = 0, hi = 0;
void checkPal(string s, int l, int r)
{
    bool pal = true;
    int left = l, right = r;
    int len = 0;
    while(left < right){
        //cout << s[l] << " " << s[r] << endl;
        if(s[left] != s[right]){
            pal = false;
            break;
        }
        left++;
        right--;
    }
    if(pal){
        len = (r-l) + 1;
        if(len > maxLen){
            maxLen = len;
            lo = l;
            hi = r;
        }
    }
}

void longestPal(string s, int l, int r)
{
    if( l > r)
        return;
    checkPal(s, l, r);
    longestPal(s, l += 1, r);
    longestPal(s, l, r-= 1);
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    cin >> s;
    longestPal(s, 0, n-1);
    cout << hi - lo + 1 << "\n";
    for(int i = lo; i <= hi; i++){
        cout << s[i];
    }
    cout << endl;
    return 0;
}
