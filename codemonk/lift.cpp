#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int t, f, A = 0, B = 7;
    cin>>t;
    while(t--){
        cin>>f;
        if( abs(A-f) <= abs(B-f)){
            A = f;
            cout<<"A"<<endl;
        }
        else{
            B = f;
            cout<<"B"<<endl;
        }
    }
    return 0;
}
