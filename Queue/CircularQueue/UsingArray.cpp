#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int currSize, cap;
    int f, r;
public:
    CircularQueue(int size) {
        cap = size;
        currSize = 0;
        arr = new int[cap];
        f = 0;
        r = -1;
    }

    void push(int data) {
        if(cap == currSize) {
            cout << "Circular Queue is full\n";
            return;
        }
        r = (r+1) % cap;
        arr[r] = data;
        currSize++;
    }

    void pop() {
        if(cap == 0) {
            cout << "Empty\n";
            return;
        }
        f = (f+1) % cap;
        currSize--;
    }

    int front() {
        if(empty()) {
            cout << "Empty\n";
            return -1;
        }
        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    void printArr() {
        for(int i=0; i<cap; i++) {
            cout << arr[i] << " ";
        }
    }

};

int main() {
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);

    cq.pop();

    while(!cq.empty()) {
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;
    
    return 0;

}