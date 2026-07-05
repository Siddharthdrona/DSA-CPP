#include <iostream>     // Imp code
using namespace std;

void findIndices(int arr[], int size, int &minIndex, int &maxIndex) {

    minIndex = 0;
    maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";    // size of array
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " elements: ";     // elements of array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minIndex, maxIndex;
    findIndices(arr, n, minIndex, maxIndex);

    cout << "Index of the smallest number: " << minIndex << endl;
    cout << "Index of the largest number: " << maxIndex << endl;

    delete[] arr;
    return 0;
}
