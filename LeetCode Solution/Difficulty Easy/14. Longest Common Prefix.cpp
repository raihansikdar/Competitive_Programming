/*

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
        
        int n = st.size();
        
        sort(st.begin(),st.end());
        
        string a = st[0];   // after sorting first element
        string b = st[n-1]; // after sorting last element
        
        // cout<<a<<" "<<b;   // flight flower
        // cout<<st[1];
        
        
        string ans = "";
        
        for(int i = 0;i<a.length();i++)
        {
            if(a[i]==b[i])
            {
                ans += a[i];
             }
            else
            {
                break;
            }
        }
        return ans;
        
    }
};