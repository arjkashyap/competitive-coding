// Given the root node of bst, return the sum of values of all
// nodes between R and L

#include<stdio.h>
#include<stdlib.h>
#define null 0
int result = 0;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* getNewNode(int data){
    struct Node* nodePtr = (struct Node*)(malloc(sizeof(struct Node)));
    nodePtr -> data = data;
    nodePtr -> left = nodePtr -> right = NULL;
    return nodePtr;
}

struct Node*  Insert(struct Node* root, int data){
    if(root == NULL)
        return getNewNode(data);

    else if( data <= root -> data ){
        root -> left = Insert(root -> left, data);
    }

    else if ( data > root -> data ){
        root -> right = Insert(root -> right, data);
    }

    return root;
}

void Inorder(struct Node* root){
    if(root != NULL){
        Inorder(root -> left);
        printf("%d ", root -> data);
        Inorder(root -> right);
    }
}


int rangeSum(struct Node* root, int L, int R){
    if(root != NULL){
        rangeSum(root -> left, L, R);
        if( root -> data >= L && root -> data <= R)
            result += root -> data;
        rangeSum(root -> right, L, R);
    }
    int res = result;
    return res;
}

int main(){
    struct Node* root = NULL;
    int L = 6, R = 10;
    
    root = Insert(root, 10);
    root = Insert(root, 5);
    root = Insert(root, 15);
    root = Insert(root, 3);
    root = Insert(root, 7);
    root = Insert(root, 13);
    root = Insert(root, 18);
    root = Insert(root, 1);
    root = Insert(root, null);
    root = Insert(root, 6);
    Inorder(root);
    printf("\n%d\n", rangeSum(root, L, R));
    return 0;
}











