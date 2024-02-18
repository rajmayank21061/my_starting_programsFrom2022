#include<iostream>
#include<vector>
using namespace std;

void solve(const vector<int>& nums, int index, vector<int>& output, vector<vector<int>>& ans) {
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // Exclude
    solve(nums, index + 1, output, ans);

    // Include
    output.push_back(nums[index]);
    solve(nums, index + 1, output, ans);
    output.pop_back();  // Backtrack
}
class Solution {
private:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int index) {
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int j = 0; j < nums.size(); j++) {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1); 
            //backtrack
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    
    solve(nums, index, output, ans);

    // Print the resulting subsets
    for (const auto& subset : ans) {
        cout << "[";
        for (int num : subset) {
            cout << num << "";
        }
        cout << "]\n";
    }

    return 0;
}
