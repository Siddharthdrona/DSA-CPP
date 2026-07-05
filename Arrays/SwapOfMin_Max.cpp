#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    int size = 4;
    int smallest = INT_MAX;
    int largest  = INT_MIN;

    for(int i=0;i<size;i++)    {
        smallest = min(arr[i],smallest);
        largest  = max(arr[i],largest);
    }

    swap(smallest,largest);

    cout<<"Smallest = "<<smallest<<endl;
    cout<<"largest  = "<<largest<<endl;
    return 0;
}