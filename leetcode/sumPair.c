// Finding the pair of elements with desired sum

#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortArr(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i -1; j++){
            if(a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
        }
    }
}

int main(){
    int sum, n;
    printf("Enter the desired sum.\n");
    scanf("%d", &sum);
    printf("Enter the number of elements in the array. \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array. \n");

    for(int i = 0; i < n; i++){ scanf("%d", &a[i]); }

    sortArr(a, n); 

    int start = 0, end = n-1;
    while(start < end){
        int s = a[start] + a[end];
        if(s == sum){
            printf("Pair %d and %d yield sum = %d\n", a[start], a[end], sum);
            break;
        }
        else if(s > sum)
            end = end - 1;
        else if ( s < sum )
            start = start + 1;     
    }

    return 0;
}



