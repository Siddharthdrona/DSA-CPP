#include<iostream>
using namespace std;

int sumOfNterms(int n) {
    if(n==1 || n==0) {
        return n;
    }

    return n + sumOfNterms(n-1);
}

int main() {
    int n;
    cout<<"Enter a  Number: ";
    cin>>n;
    cout << sumOfNterms(n)<<endl;
    return 0;
}