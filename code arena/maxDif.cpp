#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i = 0; i < n; i ++)
        cin>>a[i];
    int max = 0;
    int count = 0, skip = 0;
    for(int i = 0; i < n; i++)
    {
        if ( a[i] <= m){
            count++;
        }
        else if ( a[i] > m && skip < 1 ){
            skip += 1;
        }
        else if ( a[i] > m && skip == 1 ){
            if( count > max ){
                max = count;
            }
            count = 0;
            skip = 0;
        }
    }
    cout<<count<<endl;
    return 0;
}
