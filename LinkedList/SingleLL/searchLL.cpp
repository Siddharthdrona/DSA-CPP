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

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void searchLL(int val) {
        Node* temp = head;
        int idx = 0;
        while(temp != NULL) {
            if(temp->data == val) {
                cout << "index = " << idx ;
                return;
            } 
            idx++;
            temp = temp->next;
        }
        cout << "-1";
    }


}; 

int main() {
    List ll;

    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.searchLL(4);

    return 0;
}