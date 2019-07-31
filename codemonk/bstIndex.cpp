#include<iostream>
using namespace std;

int bstInd(int index, int total, int a[]){
    int res = 0;
    while( index < total ){
        res += a[index];
        index++;
    }
    cout<<res<<endl;
    return res;
}

int main(){
    int t, a;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++){
       cin>>a;
       arr[i] = a;
    }
    int max = 0;
    for(int i = 0; i < t; i++){
        if( bstInd(i, t, arr) >= max)
            max = bstInd(i, t, arr);
        else
            continue;
    }
    cout<<max<<endl;
    return 0;
}
