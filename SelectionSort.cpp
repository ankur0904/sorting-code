#include <bits/stdc++.h>
using namespace std;

void selection(vector<int> &nums){
    int n = nums.size();
    int min_index;
    for(int i = 0; i < n - 1; i++){
        min_index = i;
        for(int j = i + 1; j < n; j++){
            if(nums[min_index] > nums[j]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(nums[i], nums[min_index]);
        }
    }
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    selection(nums);
    for(int item: nums){
        cout << item << " ";
    }cout << endl;
    return 0;
}