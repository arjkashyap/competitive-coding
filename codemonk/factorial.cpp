#include<iostream>
using namespace std;

int fact(int num){
    if(num == 0)
        return num;
    return num*fact(num-1)
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}