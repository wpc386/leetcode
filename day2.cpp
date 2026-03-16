#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0,fast=0;
        for(fast;fast<nums.size();fast++){
            if(nums[slow]!=nums[fast]){
                nums[slow]=nums[fast];
            }
        }
    return slow+1;
    }
    
};
int main(){
    Solution Sl;
    int result=0;
    vector<int>nums={0,0,1,2,3,4,4};
    result=Sl.removeDuplicates(nums);
    cout<<result<<endl;
}