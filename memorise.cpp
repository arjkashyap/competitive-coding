#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

int main(){
    int n, q, freq;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i ++ ) cin >> arr[i];
    int aux[MAX] = {0};
    
    for(int i = 0; i < n; i++)
        aux[arr[i]]++;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        freq = aux[num];
        if(freq)
            cout << freq << endl;
        else
            cout << "NOT PRESENT" << endl;
    }

    return 0;
}
