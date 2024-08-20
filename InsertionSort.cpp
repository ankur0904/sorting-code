# include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j > 0; j--){
            if(nums[j] < nums[j-1]){
                swap(nums[j], nums[j-1]);
            }else{
                break;
            }
        }
    }
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    insertion(nums);
    for(int item: nums){
        cout << item << " ";
    }cout << endl;
    return 0;
}