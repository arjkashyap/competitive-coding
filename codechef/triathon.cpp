#include<bits/stdc++.h>
using namespace std;

struct Time{
    int c, p, d;
};

int Min(struct Time a[], int n){
    int min = 200000;
    int res = 0;
    for( int i = 0; i < n; i++ ){
        int tmp = a[i].c + a[i].p + a[i].d;
        if( tmp < min ){
            min = tmp;
            res =a[i].c +  a[i].p + a[i].d;
        }
    }
    return res;
}

int Max(struct Time a[], int n){
    int max = 0; 
    for( int i = 0; i < n; i++ ){
        int tmp = a[i].c + a[i].p + a[i].d;
        if( tmp > max )
            max = tmp;
    }
    return max;
}

void pop(struct Time a[], int index, int *n){
    
    
    while( index < *(n)-1 ){
        a[index] = a[index + 1];
        index++;
    }
    *n = *n - 1;
}

int main(){
    int n;
    scanf("%d", &n);
    struct Time a[n];
    for( int i = 0; i < n; i++ ){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        a[i].c = x; a[i].p = y; a[i].d = z;
    }
    int cobaltMax = 0;
    int total = 0;
    int add = Min(a, n);
    for( int i = 0; i < n; i++ ){
        int tmpSum = a[i].c + a[i].p + a[i].d;
        if( Max(a, n) == tmpSum){
            cobaltMax += a[i].c;
            pop(a, i, &n);
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if( Max(a, n) == (a[i].c + a[i].p + a[i].d) ){
            int temp = total;
            cobaltMax += a[i].c;
            pop(a, i,  &n);
        }
    }
    printf("%d\n", cobaltMax + add);
    return 0;
}
