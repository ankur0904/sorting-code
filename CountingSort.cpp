# include <bits/stdc++.h>
using namespace std;

void counting(vector<int> &nums){
    int n = nums.size();
    int i = 0;
    while(i < n){
        int correctIndex = nums[i] - 1;
        if(i != correctIndex){
            swap(nums[i], nums[correctIndex]);
        }else{
        i++;
            
        }
    }
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    counting(nums);
    for(int item: nums){
        cout << item << " ";
    }cout << endl;
    return 0;
}