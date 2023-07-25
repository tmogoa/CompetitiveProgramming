#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> numsSmaller;

        for(int i = 0; i < nums.size(); i++){

            //possible optimization!!
            int countOfSmaller = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] != nums[i] && nums[j] < nums[i]){
                    countOfSmaller++;
                }
            }
            numsSmaller.push_back(countOfSmaller);
        }
        
    }
};