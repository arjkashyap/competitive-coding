#include<bits/stdc++.h>
using namespace std;

void pop(int *a, int *size, int index){
    int n = *size;
    while(index < n){
        a[index] = a[index + 1];
        index++;
    }
    *size -= 1;
}

int main(){
    int m, n;
    scanf("%d", &m);
    int shelf[m];
    for( int i = 0; i < m; i++ ) scanf("%d", &shelf[i]);
    scanf("%d", &n);
    while(n--){
        int index;
        scanf("%d", &index);
        printf("%d\n", shelf[index-1]);
        pop(shelf, &m, index-1);

    }

    return 0;
}
