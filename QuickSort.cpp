# include <bits/stdc++.h>
using namespace std;

// With recursion

void quick(vector<int> &nums, int low, int high){
    if(low >= high){
        return;
    }
    int s = low, e = high;
    int mid = s + (e - s) / 2;
    int pivot = nums[mid];
    while(s <= e){
        while(nums[s] < pivot){
            s++;
        }
        while(nums[e] > pivot){
            e--;
        }
        while(s <= e){
            swap(nums[s], nums[e]);
            s++; e--;
        }
    }
    quick(nums, low, e);
    quick(nums, s, high);
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    quick(nums);
    for(int item: nums){
        cout << item << " ";
    }cout << endl;
    return 0;
}