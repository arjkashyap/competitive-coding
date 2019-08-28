#include<stdio.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* getNewNode(int data){
    struct Node* newNode = (struct Node*)(malloc(sizeof(struct Node)));
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

void Insert(struct Node** ptr, int data){
    if(*ptr == NULL){
        *root = getNewNode(data);
        return;
    }


}
