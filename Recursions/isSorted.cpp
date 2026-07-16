#include<iostream>
using namespace std;

int isSorted(int arr[],int n) {
    if(n==0 || n==1) {
        return 1;
    }
    return (arr[n-1] > arr[n-2] && isSorted(arr, n-1) );
}

int main() {
    int arr[] = {1,7,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    cout<<isSorted(arr,n);
    return 0;
}