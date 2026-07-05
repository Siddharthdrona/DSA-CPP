#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
public:
    List() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int reverseLL() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        }
        return prev->data;
    }
};

int main() {
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);

    cout << ll.reverseLL() ;

    return 0;
}