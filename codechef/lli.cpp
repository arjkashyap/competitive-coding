#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int a){
    struct Node* newNode = new Node;
    if(head == NULL){
        newNode -> data = a;
        newNode -> next = NULL;
        head = newNode;
        return;
    }
    newNode -> data = a;
    newNode -> next = NULL;
   struct Node* ptr = head;
   while(ptr != NULL){
        if(ptr -> next == NULL){
            ptr -> next =  newNode;
            return;
        }
        ptr = ptr -> next;
   }
}

void display(){
    struct Node* ptr = head;
    while(ptr != NULL){
    cout<<ptr->data<<endl;;
    ptr = ptr -> next;
    }
}

int main(){
    int t, a;
    cin>>t;
    while(t--){
        cin>>a;
        insert(a);
    }
    display();
    return 0;

}
