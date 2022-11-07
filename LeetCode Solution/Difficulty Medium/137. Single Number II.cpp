/*

Given an integer array nums where every element appears three times except for one, which appears exactly once.
Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99
 

Constraints:

1 <= nums.length <= 3 * 104
-231 <= nums[i] <= 231 - 1
Each element in nums appears exactly three times except for one element which appears once.


*/



class Solution {
public:
    int singleNumber(vector<int>& v) {
        
        map <int,int> mp;
        int ans;
        
        for(int i = 0;i < v.size();i++)
        {
            int x = v[i];
            mp[x]++;
         }
        
        for(auto it: mp)
        {
           int x = it.first;
           int y = it.second;
           
            if(y!=3)
            {
                ans = x;
                break;
             }     
        }
        
        return ans;
        
    }
};


