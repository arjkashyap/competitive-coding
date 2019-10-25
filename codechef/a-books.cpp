#include<bits/stdc++.h>
using namespace std;

int rightIndex(int arr[], int n, int x){
    int l = 0, h = n-1;
    while(l <= h){
        int mid = (l + h)/2;
        if( arr[mid] == x && arr[mid+1] != x)
            return mid;
        else if ( arr[mid] <= x ||  arr[mid + 1] == x )
            l = mid + 1;
        else if ( arr[mid] > x )
            h = mid -1;
    }
    return -1;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int res[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        for( int i = 0; i < n; i++ ){
            int num = arr[i];
            res[i] = (n - rightIndex(arr, n, num)) - 1 ;
        }
        for(int i = 0; i < n; i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
