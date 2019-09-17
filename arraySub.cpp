#include<iostream>
using namespace std;

int maxSub(int a[], int low, int high){
    int res = 0;
    while(low <= high){
        if(a[low] > res)
            res = a[low];
        low++;
    }
    return res;
}

int main(){
    int n, k;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){ cin>>a[i]; }
    cin>>k;
    for(int i = 0; i <= n-k; i++){
        cout<<maxSub(a, i, i + k - 1)<<" ";
    }
    cout<<endl;
    return 0;
}
