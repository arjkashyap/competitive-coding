#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *ptr1, *ptr2;
    ptr1 = head1;
    ptr2 = head2;
    SinglyLinkedListNode* head = nullptr;
    while(ptr1 && ptr2){
        SinglyLinkedListNode* newNode;
        if( ptr1 -> data < ptr2 -> data ){
            newNode = new SinglyLinkedListNode(ptr1 -> data);
            ptr1 = ptr1 -> next;
        }
        else {
            newNode = new SinglyLinkedListNode(ptr2 -> data);
            ptr2 = ptr2 -> next;
        }
        if(!head){
            head = newNode;
            continue;
        }
        SinglyLinkedListNode* tmp = head;
        while(tmp -> next){
            tmp = tmp -> next;
        }
        tmp -> next = newNode;
    }
    
    while(ptr1){
        SinglyLinkedListNode *newNode, *tmp;
        newNode = new SinglyLinkedListNode(ptr1 -> data);
        tmp = head;
        while(tmp -> next)
            tmp = tmp -> next;
        tmp -> next = newNode;
        ptr1 = ptr1 -> next;
    }

    while(ptr2){
        SinglyLinkedListNode *newNode, *tmp;
        newNode = new SinglyLinkedListNode(ptr2 -> data);
        tmp = head;
        while(tmp -> next)
            tmp = tmp -> next;
        tmp -> next = newNode;
        ptr2 = ptr2 -> next;
    }
    return head;
}

int main()
