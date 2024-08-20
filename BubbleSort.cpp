#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int> &nums){
    int n = nums.size();
    bool isSwap;
    for(int i = 0; i < n - 1; i++){
        isSwap = false;
        for(int j = 1; j < n - i; j++){
            if(nums[j] < nums[j-1]){
                swap(nums[j], nums[j-1]);
                isSwap = true;
            }
        }
        if(isSwap == false){
            return;
        }
    }
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    bubble(nums);
    for(int item: nums){
        cout << item << " ";
    }cout << endl;
    return 0;
}