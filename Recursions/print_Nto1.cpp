#include<iostream>
using namespace std;

void display_1toN(int n) {
    if(n==1 || n==0) {
        cout << n << endl;
        return;
    }
    cout << n << endl;
    display_1toN(n-1);
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n ;
    display_1toN(n) ;
    return 0;
}