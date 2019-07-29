#include<iostream>
using namespace std;

int main(){
    int a[6][6];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
	    cin>>a[i][j];
    }
    int n1, n2;
    for(int i =0; i <= 3; i++){
        for(int j = i; j <= i+2; j++){
            n1 += a[i][j];
        }
        n1 += a[i+1][i+1];
        for(int k = i; k<= i+2; k++){
            n1 += a[i+2][k];
        }
    }    
}
