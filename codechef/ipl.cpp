#include<bits/stdc++.h>
using namespace std;

int maxSum(int a, int b, int c){
    if( a + b > b + c )
        return a + b;
    return b + c;
}

int main(){
    int n, total = 0;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ) cin >> arr[i];
    int index = 0;
    while( index + 3  < n ){
        total += maxSum(arr[index], arr[index + 1], arr[index + 2]);
        index += 3;
    }
    
    while( index != n ){
        total += arr[index];
        index++;
    }
    
    cout << total << endl;
    return 0;
}
