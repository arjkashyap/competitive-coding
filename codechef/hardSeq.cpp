#include<bits/stdc++.h>
using namespace std;
#define MAX 128
int A[MAX] = {0};

int findLastIndex(int num, int index)
{
    do{
        index--;
        if( A[index] == num )
            return index;
    }while(index >= 0);

    return index;
}

void fillArr()
{
    for( int i = 1; i <= MAX; i++){
        int lastIndex = findLastIndex(A[i-1], i - 1);
        if( lastIndex == -1 )
            A[i] = 0;
        else
            A[i] = (i+1) - (lastIndex + 1) - 1; 
    }
}


int main()
{
    int t;
    scanf("%d", &t);
    fillArr();
    while(t--){
        int n;
        scanf("%d", &n);
        int count = 0;
        int num = A[n-1];
        for( int i = 0; i < n; i++ ){
            if( num == A[i] )
                count ++;
        }
        printf("%d\n", count);
    }

    return 0;
}

