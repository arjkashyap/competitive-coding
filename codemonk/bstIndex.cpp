#include<iostream>
using namespace std;

int bstInd(int index, int total, int a[]){
    int res = 0, i = 0;    
    while( i < (total - index)){
        for(int j = 0; j <= i; j++)
            res += a[index + j];
        i++;
        index += i;
    }
    return res;
}

int main(){
    int t, e;
    cin>>t;
    int arr[t];
    for(int i = 0; i < t; i++){
        cin>>e;
        arr[i] = e;
    }
    int ind, max = 0; 
    for(int i = 0; i < t; i++){
        ind = bstInd(i, t, arr);
        if(ind > max)
            max = ind;
    }
    cout<<max<<endl;
    return 0;
}
