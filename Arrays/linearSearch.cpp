#include<iostream>
using namespace std;

int linearSearch(int arr[],int target,int size)    {
    for(int i=0;i<size;i++) {
        if(arr[i] == target) {  // target found
            return i;
        }
    }
    return -1; // Target not found
}
int main()  {
    int arr[4] = {2,34,8,45};
    int target = 8;
    cout<<linearSearch(arr,target,4)<<endl;
    return 0;
}




// int main()  {
//     int arr[4] = {1,2,3,4};
//     int size = 4;
//     int target = 1;
//     int ans;
//     for(int i=0;i<size;i++) {
//         if(arr[i] == target)    {
//             ans = i;
//         }
//     }
//      else {
//          ans = -1;
//      }
//     cout<<ans<<endl;
//     return 0;
// }