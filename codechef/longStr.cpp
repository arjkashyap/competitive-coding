#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        if(str.length() > 10){
            int num = str.length() - 2;
            cout<<str[0]<<num<<str[str.length()-1]<<endl;
        }
        else
            cout<<str<<endl;
    }
    
    return 0;

}
