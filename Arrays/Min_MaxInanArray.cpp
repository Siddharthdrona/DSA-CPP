#include<iostream>
#include<limits.h>
using namespace std;

int main()  {
    int arr[5] = {12,23,4,5,-15};
    int size = 5;

    int smallest = INT_MAX;
    int largest  = INT_MIN;

    for(int i=0;i<size;i++) {
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
    }

     cout<<"Smallest =  "<<smallest<<endl;
     cout<<"Largest =  "<<largest;
    return 0;
}


