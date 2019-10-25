#include<stdio.h>
#include<stdlib.h>

void Sort(int[], int);
void Swap(int*, int*);

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];
        int count = k;
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        Sort(a, n);
        int index = k;
        while( a[index] >= a[k-1] ){
            count++;
            index++;
        }
        printf("%d\n", count);
    }
    
    return 0;
}

void Sort(int arr[], int n){
    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if( arr[j] < arr[j+1] )
                Swap(&arr[j], &arr[j+1]);
        }
    }
}

void Swap(int*a, int*b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
