#include<stdio.h>

int head = NULL;

struct Node{
    int data;
    struct Node* next;
};

void push(int a){
    if(head == NULL){
        struct Node *newNode = 
    }

}

void swap(int* a, int* b){
    int tmp = *a;
    *b = *a;
    *a = tmp;
}

int main(){
    int t;
    int a[t];
    for(int i = 0; i < t; i++)
       scanf("%d", &a[i]);
    // sorting
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1;){
            if(a[j] > a[j+1])
                swap(&a[j], &[j+1]);
        }
    }
       
    
}
