#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &left, vector<int> &right){
    vector<int> res(left.size()+right.size());
    
    int i = 0, j = 0, k = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]){
            res[k] = left[i];
            i++;
        }else{
            res[k] = right[j];
            j++;
        }
        k++;
    }
    
    while(i < left.size()){
        res[k++] = left[i++];
    }
    while(j < right.size()){
        res[k++] = right[j++];
    }
    return res;
}

vector<int> mergeSort(vector<int> &nums, int s, int e){
    int mid = s + (e - s) / 2;
    if(e - s == 0)  return {nums[s]};
    vector<int> left = mergeSort(nums, s, mid);
    vector<int> right = mergeSort(nums, mid+1, e);
    vector<int> res = merge(left, right);
    return res;
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    vector<int> res = mergeSort(nums, 0, 4);
    for(int item: res){
        cout << item << " ";
    }cout << endl;
    return 0;
}