#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int st, int end) {

    if(st <= end) {
        int mid = st + (end-st)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] >= target) {
        return binarySearch(arr, target, st, mid-1);
        }
        else if(arr[mid] <= target) {
        return binarySearch(arr, target, mid+1, end);
        }
    }
    return -1;        
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr, 4, 0, n-1)<<endl;

    return 0;
}