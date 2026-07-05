#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};

class DoublyList {
    Node* head;
    Node* tail;
public:
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        
    }
    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }


    void pop_front() {
        if(head == NULL) {
            return;
        }
        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
         if(head == NULL) {
            return;
        }

        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
    
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;

        delete temp;
    }

    void printdll() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main() {
    DoublyList dll;

    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);

   dll.pop_front();

    dll.pop_back();

    dll.printdll();

    return 0;
}