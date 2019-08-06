#include<iostream>
#include<cmath>
using namespace std;

int sqCalc(int n){
    int res = 0;
    while(n!= 0){
        res += pow(n, 2);
        n--;
    }
    return res;
}

int main(){
    int t;
    while(1){
        cin>>t;
        if(t == 0)
            break;
        else{
            cout<<sqCalc(t)<<endl;
        }
    }
    return 0;
}
