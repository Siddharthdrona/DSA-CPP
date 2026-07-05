#include<iostream>
#include<limits.h>
using namespace std;
void Intersection(int arr1[],int n1,int arr2[],int n2)   {
    for(int i=0;i<3;i++)    {
        for(int j=0;j<5;j++)    {
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    cout<<endl;
    
}
int main()  {
    int arr1[3] = {1,2,3};
    int n1=3;
    int arr2[5] = {2,3,4,5,6};
    int n2=5;

    Intersection(arr1,n1,arr2,n2);
    return 0;
}