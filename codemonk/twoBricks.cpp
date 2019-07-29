#include<iostream>
using namespace std;

int patlu(int a){ return a; }

int motu(int a){ return 2*a; }

int main(){
    int n;
    cin>>n;
    int total = 0;
    for(int i = 1; i < n; i++){
        total += patlu(i);
        if( total >= n ){ 
            cout<<"Patlu"<<endl;
            break;
        }
        total += motu(i);
        if( total >= n ){
            cout<<"Motu"<<endl;
            break;
        }
    }

    return 0;
}
