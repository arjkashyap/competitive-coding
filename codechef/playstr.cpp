#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c1 = 0, c2 = 0;
        string s1, s2;
        cin>>n>>s1>>s2;
        for(int i = 0; i < n; i++ ){
            if(s1.at(i) == '1'){ c1 += 1; }
            if(s2.at(i) == '1'){ c2 += 1; }
        }
        if( c1 == c2 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
