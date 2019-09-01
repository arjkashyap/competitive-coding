#include<stdio.h>
#include<stdlib.h>

void sort(int[], int);
void swap(int*, int*);
void sumPair(int[], int, int);

int main(){
    int n, search;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    scanf("%d", &search);
    sort(a, n);
    sumPair(a, n, search);
    return 0;
}

void sumPair(int a[], int n, int s){
    int start = 0, end = n-1;
    while(start < end){
        int mid = start + end / 2;
        printf("%d %d\n ", a[start], a[end]);
        if( a[start] + a[end] ==  s){
            printf("%d %d \n", a[start], a[end]);
            return;
        }
        else if(a[start] + a[end] > s)
            end = mid - 1;
        else if (a[start] + a[end] < s)
            start = mid + 1;
            
    }
}

void sort(int a[], int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n - i - i; j++){
            if( a[j] < a[j+1] ){
                swap(&a[j], &a[j+1]);
            }
        }
    }

}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
