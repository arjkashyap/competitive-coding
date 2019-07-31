#include<iostream>
using namespace std;

int main(){
    int n, t, i;
    cin>>n>>t;
    while(n--){
        cin>>i;
        if(i >= t)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
