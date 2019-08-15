#include<iostream>
using namespace std;

int main(){
    int total, diff, t = 10;
    int k, n;
    while(t--){
        cin>>total;
        cin>>diff;
        n = (total - diff)/2;
        k = total - n;
        cout<<k<<endl<<n<<endl;
    }
    return 0;
}
