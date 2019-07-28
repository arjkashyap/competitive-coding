#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    string s1, s2;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        for(int i = 0; i < s1.length(); i++){
            for(int j = 0; j < s2.length(); j++){
                if( s1[i] == s2[j]){
                    s2[j] = '0';
                    break;
                }
            }
        }
        bool isEqual = true;
        for(int i = 0; i < s2.length(); i ++){
            if(s2[i] != '0')
                isEqual = false;
        }
        if(isEqual)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
