#include<iostream>
using namespace std;

void max(int arr[], int n){
    int max_occ = - 1;
    int max_elm = -1 ;
    for(int i = n - 1; i >= 0;i--){
        if(arr[i] >= max_occ){
            max_occ = arr[i];
            max_elm = i;
        }
    }
    cout<<max_elm + 1<<" "<<max_occ<<endl;
}

void rearr(int arr[], int n){
    for(int i = 0; i < n; i++)
        arr[i] -= 1;
    for(int i = 0; i < n; i++)
        arr[arr[i] % n] = arr[ arr[i] % n] + n;
    for(int i = 0; i < n; i++)
        arr[i] = arr[i] / n;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin>>arr[i];
        
        rearr(arr, n);
        max(arr, n);
    }
    
    return 0;
}