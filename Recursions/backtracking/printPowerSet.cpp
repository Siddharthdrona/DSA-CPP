#include<iostream>
#include<vector>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
    if(i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }
    //include
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i+1, allSubsets);
    //backtracking step
    ans.pop_back();
    //exclude
    getAllSubsets(nums, ans, i+1, allSubsets);
}


int main() {
    vector<int> nums = {1,2,3};
    vector<int> ans;
    vector<vector<int>> allSubsets;

    getAllSubsets(nums, ans, 0, allSubsets);

    //print all Subsets
    cout<<"{";
    for(auto &subset : allSubsets) {
        cout<<"[";
        for(int val: subset) {
            cout << val << " ";
        }
        cout<<"] ";
    }
    cout<<"}";
    return 0;

}