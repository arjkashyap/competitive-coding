#include<iostream>

using namespace std;

//void swap(int* a, int* b){
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}

void helper(int a[], int low, int high){
   int n  = high; 
    while(low <high){
        int tmp = a[low];
        a[low] = a[high];
        a[high] = tmp;
        low++;
        high --;
    }
    
}

void rotate(int a[], int n, int k){
    helper(a, 0, k -1);
    helper(a, k, n - 1);
    helper(a, 0, n - 1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        rotate(a, n, k);
        for(int i = 0; i < n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}
