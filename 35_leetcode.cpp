// 35. Search insert position 
/* Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        int mid;
        if (target>nums[high-1]){
            return high;
        }
        while(low<=high){
            mid=(low+high)/2;
            if (nums[mid]==target){
                return mid;
            }
            if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};