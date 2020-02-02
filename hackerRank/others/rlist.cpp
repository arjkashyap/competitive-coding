#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void Insert(int data){
    struct Node* newNode = new Node();
    if(head == NULL){
        newNode -> data = data;
        newNode -> next = NULL;
        head = newNode;
        return;
    }
    newNode -> data = data;
    newNode -> next = head;
    head = newNode;
}

void Display(){
    struct Node* ptr = head;
    while(ptr != NULL){
        cout<<ptr -> data<<" ";
        ptr = ptr -> next;
    }
}

int main(){
    int n, a;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        Insert(a);
    }
    Display();
    return 0;
}
