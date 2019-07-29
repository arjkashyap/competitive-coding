#include<iostream>
using namespace std;

int main(){
    int l, n;
    int w, h;
    cin>>l;
    cin>>n;
    while(n--){
        cin>>w>>h;
        if( w > l &&  h > l)
            cout<<"CROP IT"<<endl;
        else if( w != h && w < l || h < l )
            cout<<"UPLOAD ANOTHER"<<endl;
        else if ( w == h && w <= l && h <= l)
            cout<<"ACCEPTED"<<endl;
    }
    return 0;
}
