#include<iostream>
using namespace std;

int fctrl(int n){
    int res;
    if ( n== 0)
        return 1;
    return n*fctrl(n-1);
}

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<fctrl(n)<<endl;
    }
    return 0;
}
