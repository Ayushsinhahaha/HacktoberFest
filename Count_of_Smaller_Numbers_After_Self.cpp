Given an integer array nums, return an integer array counts where counts[i] is the number of smaller elements to the right of nums[i].
Example 1:
Input: nums = [5,2,6,1]
Output: [2,1,1,0]
Explanation:
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.

Solution:

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        ordered_set s;
        for(int i=nums.size()-1;i>=0;i--){
              s.insert(nums[i]);
            ans[i]=s.order_of_key(nums[i]);
        }
        return ans;
    }
};
