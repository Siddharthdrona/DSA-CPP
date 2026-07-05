#include<iostream>
using namespace std;

void PrintUnique(int arr[],int size)    {
    cout << "Unique elements in the array are: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()  {
    int arr[4] = {1,2,2,4};     // 1 4 are Unique Elements
    int size = 4;

    PrintUnique(arr,size);

    return 0;
}