#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int j[n];
      //  int* i = new int[(sizeof(int)*n)];
    //    int* k = new int[(sizeof(int)*n)];
        int i[n] = {0};
        int k[n] = {0};
        for( int index = 0; index < n; index ++ ) cin >> j[index];
        i[0] = j[0];
        
        for( int index = 1; index < n; index++ )
            i[index] = min(j[index], i[index - 1]);
        
        k[n-1] = j[n-1];
        for(int index = n-2; index >= 0; index--)
            k[index] = max(j[index], j[index + 1]);
        int max = -1;
   
        for(int index = 0; index < n; index++){
            if( i[index] + (j[index] * k[index]) >= max && (i[index] != j[index] && j[index] != k[index] && k[index] != i[index]))
                cout << i[index] << " " << j[index] << " " << k[index] << endl;
                max = i[index] + (j[index] * k[index]);
        }
        cout << max << endl;
    }
    
    return 0;
