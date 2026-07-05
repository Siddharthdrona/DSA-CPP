#include<iostream>
using namespace std;

int calculateSum(int arr[],int size,int sum,int product) {
    sum = 0,product = 1;
    for(int i=0;i<size;i++) {
       // sum += arr[i];
        product *= arr[i];
    }
    //return sum;
    return product;
}
int main()  {
    int arr[4] = {1,2,3,4};
    int size = 4;
    int sum,product;

    cout<<calculateSum(arr,size,sum,product)<<endl;
    return 0;
}