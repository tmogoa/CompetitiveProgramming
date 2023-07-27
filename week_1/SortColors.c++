#include <iostream>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        for(int i = 0; i < nums.size() - 1; i++){
            int leastIndex = getLeastIndex(i, nums);
            swap(i, leastIndex, nums);
        }

    }

    int getLeastIndex(int i, vector<int>& nums){
        int leastIndex = i;

        for(int j = i + 1; j < nums.size(); j++){
            if(nums[j] < nums[leastIndex]){
                leastIndex = j;
            }
        }

        return leastIndex;
    }

    void swap(int prev, int next, vector<int>& nums){
        if(prev == next) return;
        int prevValue = nums[prev];
        nums[prev] = nums[next];
        nums[next] = prevValue;
    }

};