#include<iostream>
using namespace std;

void test(int a, int b, int c){
   int n;
   if ( a == b == c){
        return;
   }
   else if(b*b == a*c){
        n = b/a;
        cout<<"GP "<<c*n<<endl;
    }
   else if(2*b == a + c){
        n = b - a;
        cout<<"AP "<<c+n<<endl;
    }

}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    test(a, b, c);
    return 0;
}
